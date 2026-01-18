# Laboratory Activity #6  
## Bidirectional Control Using Arduino and Python

### Course
**COSC 111 – Internet of Things**

---

## Objective
The objective of this laboratory activity is to demonstrate **bidirectional serial communication** between an Arduino and a Python application. This activity shows how **hardware inputs (buttons)** and **software inputs (keyboard commands)** can both control physical outputs (LEDs).

---

##  Description
In this activity, an Arduino board is connected to:
- Three LEDs (Red, Green, Blue)
- Three push buttons

The Arduino communicates with a Python program using **Serial communication**.  
The system works in **both directions**:

- **Arduino → Python:**  
  When a button is pressed, the Arduino sends a character (`R`, `G`, or `B`) to Python.
- **Python → Arduino:**  
  Python responds by sending a command (`1`, `2`, or `3`) to toggle the corresponding LED.

Additionally, the user can manually control the LEDs by typing commands in the Python console.

This demonstrates real-world IoT concepts such as **event-driven systems**, **human–computer interaction**, and **hybrid hardware/software control**.

---

## Activity Overview
The system has two main components:

### Arduino Side
- Reads button presses using digital inputs
- Sends button events via Serial
- Listens for commands from Python
- Toggles LEDs based on received commands

### Python Side
- Listens continuously to Arduino using a background thread
- Responds automatically to button events
- Accepts keyboard input from the user
- Sends commands to Arduino via Serial

---

## Components Required
- Arduino Uno (or compatible board)
- 3 LEDs (Red, Green, Blue)
- 3 × 220Ω resistors
- 3 push buttons
- Breadboard
- Jumper wires
- Computer with Python installed
- USB cable

---

## Pin Configuration

### LEDs
| LED Color | Arduino Pin |
|---------|-------------|
| Red | 7 |
| Green | 6 |
| Blue | 5 |

### Buttons
| Button | Arduino Pin |
|-------|-------------|
| Button 1 | 12 |
| Button 2 | 11 |
| Button 3 | 10 |

Buttons use **INPUT_PULLUP**, meaning:
- HIGH = not pressed
- LOW = pressed

---

