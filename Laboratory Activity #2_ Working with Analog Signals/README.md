# Laboratory Activity #2  
## Working with Analog Signal

### Course
**COSC 111 – Internet of Things**

---


## Description
In this activity, multiple LEDs are controlled using an array and loops to gradually change their brightness. The program uses the `analogWrite()` function to simulate analog output through PWM-capable pins.

Each LED:
- Gradually increases in brightness (fade in)
- Gradually decreases in brightness (fade out)
- Repeats the sequence continuously

This activity demonstrates how Arduino can control output intensity, which is essential for real-world IoT applications such as dimming lights, controlling motor speed, and managing power output.

---

## Activity Overview
The Arduino sketch:
- Stores LED pin numbers in an array
- Uses loops to configure and control multiple LEDs efficiently
- Applies PWM values from `0` to `255`
- Creates a smooth fading effect for each LED

---

## Components Required
- Arduino Uno (or compatible board)
- 5 LEDs
- 5 × 220Ω resistors
- Breadboard
- Jumper wires
- Arduino IDE

---

## 🔌 Pin Configuration
| LED | Arduino Pin |
|----|-------------|
| LED 1 | 12 |
| LED 2 | 11 |
| LED 3 | 10 |
| LED 4 | 9  |
| LED 5 | 8  |

⚠️ **Note:** Only PWM-capable pins support `analogWrite()`. Ensure the board supports PWM on the selected pins.


