#define PHOTO_PIN A0
#define RED_LED 13
#define YELLOW_LED 12
#define GREEN_LED 11

String inputString = "";
bool manualMode = true; 
String activeLED = "NONE"; 
int brightness = 0; 

int greenThreshold = 40; 
int redThreshold   = 70; 

const int DEFAULT_GREEN = 40;
const int DEFAULT_RED = 70;

void setup() {
  Serial.begin(9600);
  pinMode(PHOTO_PIN, INPUT);
  pinMode(RED_LED, OUTPUT);
  pinMode(YELLOW_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
}

void loop() {
  int photoValue = analogRead(PHOTO_PIN);
  brightness = map(photoValue, 0, 1023, 0, 100); 

  updateLEDs();

  displayStatus();

  delay(500);

  if (Serial.available()) {
    inputString = Serial.readStringUntil('\n');
    inputString.trim();
    inputString.toUpperCase();
    handleCommand(inputString);
  }
}

void updateLEDs() {
  if (brightness <= greenThreshold) {
    digitalWrite(RED_LED, LOW);
    digitalWrite(YELLOW_LED, LOW);
    digitalWrite(GREEN_LED, HIGH);
    activeLED = "GREEN";
  } 
  else if (brightness <= redThreshold) {
    digitalWrite(RED_LED, LOW);
    digitalWrite(YELLOW_LED, HIGH);
    digitalWrite(GREEN_LED, LOW);
    activeLED = "YELLOW";
  } 
  else {
    digitalWrite(RED_LED, HIGH);
    digitalWrite(YELLOW_LED, LOW);
    digitalWrite(GREEN_LED, LOW);
    activeLED = "RED";
  }
}

void handleCommand(String command) {
  if (command.startsWith("MODE")) {
    String modeType = command.substring(5);
    modeType.trim();

    if (modeType == "MANUAL") {
      manualMode = true;
      Serial.println("Switched to MANUAL mode.");
    } 
    else if (modeType == "AUTO") {
      manualMode = false;
      greenThreshold = DEFAULT_GREEN;
      redThreshold = DEFAULT_RED;
      Serial.println("Switched to AUTOMATIC mode. Thresholds reset to default.");
    } 
    else {
      Serial.println("Wrong command!");
    }
  }
  else if (manualMode) {
    if (command.startsWith("SET")) {
      String parts = command.substring(4);
      parts.trim();
      int spaceIndex = parts.indexOf(' ');
      if (spaceIndex == -1) {
        Serial.println("Wrong command!");
        return;
      }

      String action = parts.substring(0, spaceIndex);
      String valueStr = parts.substring(spaceIndex + 1);
      action.trim();
      valueStr.trim();

      int value = valueStr.toInt();
      if (value < 0) value = 0;
      if (value > 100) value = 100;

      if (action == "LOW") {
        greenThreshold = value;
        Serial.print("GREEN threshold updated to: ");
        Serial.print(greenThreshold);
        Serial.println("%");
      } 
      else if (action == "HIGH") {
        redThreshold = value;
        Serial.print("RED threshold updated to: ");
        Serial.print(redThreshold);
        Serial.println("%");
      } 
      else {
        Serial.println("Wrong command! Use LOW or HIGH.");
      }
    }
    else {
      Serial.println("Wrong command!");
    }
  }
  else {
    Serial.println("Wrong command!");
  }
}

void displayStatus() {
  Serial.print("Light Intensity: ");
  Serial.print(brightness);
  Serial.print("% | Active LED: ");
  Serial.print(activeLED);
  Serial.print(" | Mode: ");
  Serial.print(manualMode ? "MANUAL" : "AUTOMATIC");

  if (!manualMode) {
    String environment = "";
    if (brightness <= 40) environment = "Cloudy";
    else if (brightness <= 70) environment = "Normal";
    else environment = "Bright Sunlight";
    
    Serial.print(" | Environment: ");
    Serial.print(environment);
  }

  Serial.println();
}
