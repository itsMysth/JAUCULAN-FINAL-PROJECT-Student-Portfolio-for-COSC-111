# Laboratory Activity #7
## Arduino Serial Connection Using FastAPI

### Course
**COSC 111 – Internet of Things**

---

## Description

In this laboratory activity, Serial communication between an Arduino microcontroller and a FastAPI web application is explored. The activity demonstrates how digital outputs can be controlled remotely using web-based API requests.

By integrating Arduino hardware with a Python-based FastAPI server, the system allows LEDs to be turned **ON**, **OFF**, or **toggled** through Serial commands. This activity highlights the interaction between hardware and software, reinforcing fundamental Internet of Things (IoT) concepts.

---

## Activity Overview

The Arduino and FastAPI system performs the following tasks:

- Establishes Serial communication between Arduino and computer
- Uses FastAPI to create web-based control endpoints
- Sends single-character commands to Arduino
- Controls multiple LEDs (Red, Green, Blue)
- Demonstrates remote device control using a web API

---

## Components Used

- Arduino Uno (or compatible board)
- Red, Green, and Blue LEDs
- Resistors
- Breadboard
- Jumper wires
- Computer with Python installed
- Arduino IDE
- FastAPI framework

---

## Serial Configuration

```python
SERIAL_PORT = "COM3"
BAUD_RATE = 9600
