# Laboratory Activity #4  
## Arduino Serial Connection

### Course
**COSC 111 – Internet of Things**

---

## Objective
The objective of this laboratory activity is to demonstrate how a **photoresistor (LDR)** can be used to measure light intensity, convert raw analog values into **percentage-based readings**, and control an alert output using both **sensor input** and **Serial commands**.

---

## Description
This activity reads ambient light levels using a photoresistor connected to an Arduino analog pin. The raw sensor values are converted into a percentage (0–100%) to make the readings easier to interpret.

When the measured brightness exceeds a predefined threshold, an alert LED begins to blink. The alert behavior can also be controlled manually using **Serial Monitor commands**, allowing user interaction with the system.

This activity introduces basic **human–device interaction**, a key concept in Internet of Things (IoT) systems.

---

## Activity Overview
The Arduino program:
- Reads light intensity from a photoresistor
- Converts raw analog values to a percentage using `map()`
- Displays sensor readings via the Serial Monitor
- Triggers a blinking alert when brightness exceeds a threshold
- Allows the alert to be stopped using Serial input

---

## Components Required
- Arduino Uno (or compatible board)
- Photoresistor (LDR)
- 10kΩ resistor
- LED (alert indicator)
- Breadboard
- Jumper wires
- Arduino IDE

---

## Pin Configuration
| Component | Arduino Pin |
|---------|-------------|
| Photoresistor | A2 |
| Alert LED | 8 |

---

## Threshold Configuration
```cpp
const int LIGHT_THRESHOLD_PERCENT = 21;
