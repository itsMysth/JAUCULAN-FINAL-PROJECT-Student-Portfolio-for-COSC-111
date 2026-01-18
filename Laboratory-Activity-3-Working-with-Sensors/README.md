# Laboratory Activity #3  
## Working With Sensors

### Course
**COSC 111 – Internet of Things**

---

## Objective
The objective of this laboratory activity is to understand how **analog sensors** (temperature and light) can be read and processed using Arduino, and how conditional logic can be applied to trigger an **alert system** based on predefined thresholds.

---

## Description
This activity uses a **thermistor** and a **photoresistor (LDR)** to monitor environmental conditions. The Arduino continuously reads temperature and light intensity values and displays them on the Serial Monitor.

When **both** temperature and light intensity exceed their respective threshold values, an alert (LED or buzzer) connected to a digital pin is activated. This demonstrates how multiple sensor inputs can be combined to make logical decisions—a core concept in IoT systems.

---

## Activity Overview
The Arduino program:
- Reads temperature from a thermistor using an analog pin
- Reads light intensity from a photoresistor using an analog pin
- Converts raw analog values into meaningful data
- Compares sensor values against preset thresholds
- Triggers an alert output when conditions are met
- Displays sensor readings via Serial Monitor

---

## Components Required
- Arduino Uno (or compatible board)
- Thermistor (NTC, 10kΩ)
- Photoresistor (LDR)
- 10kΩ fixed resistor
- LED or buzzer (alert indicator)
- Breadboard
- Jumper wires
- Arduino IDE

---

## Pin Configuration
| Component | Arduino Pin |
|---------|-------------|
| Thermistor | A0 |
| Photoresistor | A2 |
| Alert (LED/Buzzer) | 12 |

---

## ⚙️ Threshold Values
```cpp
const float temp_Threshold = 50.0; // Celsius
const int light_Threshold = 220;   // Brightness
