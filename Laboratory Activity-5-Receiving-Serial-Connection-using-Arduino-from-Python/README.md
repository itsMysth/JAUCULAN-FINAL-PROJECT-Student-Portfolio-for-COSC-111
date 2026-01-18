# Laboratory Activity #5  
## Receiving Serial Connection using Arduino from Python

### Course
**COSC 111 – Internet of Things**

---

## Objective
The objective of this laboratory activity is to demonstrate **serial communication between a Python program and an Arduino microcontroller** to control multiple LEDs. This activity introduces computer-to-device interaction, command-based control, and modular programming concepts used in IoT systems.

---

## Description
In this activity, a Python console application sends commands to an Arduino via **Serial communication**. The Arduino interprets these commands to control three LEDs (Red, Green, and Blue).

The Arduino code is structured using:
- A main `.ino` file for serial command handling
- A separate `.h` header file for LED control logic

This separation improves readability, reusability, and maintainability—important practices in real-world IoT development.

---

## Activity Overview
The system consists of two parts:

### Python Program
- Displays a menu to the user
- Sends single-character commands to Arduino
- Receives and displays Arduino responses
- Allows interactive LED control via keyboard input

### Arduino Program
- Reads serial commands from Python
- Toggles individual LEDs or controls all LEDs
- Sends feedback messages back to Python
- Uses modular LED control functions

---

## Components Required
- Arduino Uno (or compatible board)
- 3 LEDs (Red, Green, Blue)
- 3 × 220Ω resistors
- Breadboard
- Jumper wires
- Computer with Python installed
- USB cable

---

## Pin Configuration
| LED Color | Arduino Pin |
|---------|-------------|
| Red | 8 |
| Green | 9 |
| Blue | 10 |

---


