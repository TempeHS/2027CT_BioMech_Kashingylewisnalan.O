# BIOMEDICAL MECHATRONICS (ARM OF MALENIA)

Description

## Overview

A prosthetic fore-arm and hand that uses an EMG to read natural electrical activity produced by the remainder of Aaron's fore-arm stump to contract the fingers of the arm to clamp onto rocks, as per Aaron's request. It a sport's specific prosthetic that that requires Aaron to think about moving his wrist or hand. Electrodes placed on either side of the skin pick up these electrical signatures that come from an oboard computer or micro-controller to translate the frequency and strenght of the electrical wave into a specific mechanical action.

## Statement of Intent

### What is the device?
The proposed device is a sports-specific climbing prosthetic arm designed to help Aaron return to rock climbing. The main feature is a strong, adjustable climbing attachment that can securely grip and connect with climbing holds. The device will sense the force placed on the prosthetic and respond by providing a stable grip, helping Aaron maintain control while climbing.

### Who is it for?
The device is designed specifically for Aaron, who has a mid-section trans-radial amputation of his right arm. Aaron enjoys bush walking and rock climbing and particularly wants to regain his ability to climb. The prosthetic therefore needs to be lightweight, durable, comfortable and capable of handling the forces involved in rock climbing.

### Why is it needed?
The device is needed because Aaron's right forearm was amputated following a traumatic injury that could not be healed and Aaron wants to be active and rock climb again. His medical notes confirm a mid-section trans-radial amputation of the right arm, making climbing and some daily activities difficult. A specialised prosthetic would address his specific need for a device that can withstand the physical demands of rock climbing.

### How will it help?
The climbing prosthetic will allow Aaron to grip climbing holds more effectively and improve his balance, stability and control while climbing. This will help him safely participate in an activity he enjoys and increase his independence during physical activities and everyday tasks. Most importantly, the device will help Aaron work towards returning to rock climbing and improve his overall quality of life.


## The working rhythm

**Write** the code in your Codespace, **Upload** it to the Arduino, **Test** it with the sensor kit, then **Commit and Push** every working solution with a clear message and a photo of your build.

## Folder guide

| Folder                      | Lesson                                        | Hardware                                      |
| --------------------------- | --------------------------------------------- | --------------------------------------------- |
| `01.serialMonitor`          | Serial Monitor & Program Structure            | none                                          |
| `02.storingData`            | Variables & Data Types                        | none                                          |
| `03.buttonsAndDecisions`    | Digital I/O + selection (if/else/switch)      | Button D4, LED D6, Line Finder D7             |
| `04.analogueInOut`          | Analogue input + math + PWM output            | Pot A0, Sound A2, Light A3, LED D6, Buzzer D5 |
| `05.loopsAndTime`           | Loops + delay vs millis + random              | Button D4, Buzzer D5, LED D6                  |
| `06.servoMotor`             | Positional servo with the Servo library       | Servo D3, Pot A0                              |
| `07.ultrasonicAndFunctions` | Ultrasonic library + structuring functions    | Ultrasonic D2, Buzzer D5, LED D6              |
| `08.motorFundamentals`      | Direct-wire a DC motor + motor control theory | DC motor, battery pack (real wiring)          |
| `09.I2C`                    | I2C bus, OLED display and sensors             | OLED + I2C sensors                            |
| `10.OOP`                    | Object-Oriented Programming                   | LED D6 + built-in LED                         |
| `11.myProjects`             | Capstone builds                               | your choice                                   |

Each sketch's header comment lists the learning intention, success criteria and Grove ports for that activity. Folders also contain **optional breadboard schematics** (`Bootcamp-*.png`) showing how the same circuits are wired by hand without Grove modules, for anyone who wants to look under the hood.

## Standard Grove ports

![Arduino Uno pin-out for this bootcamp](pinout.png)

| Module                                             | Port    |
| -------------------------------------------------- | ------- |
| **DO NOT USE** (TX/RX serial to your computer)     | D0 / D1 |
| Ultrasonic (3-pin)                                 | D2      |
| Servo                                              | D3      |
| Button                                             | D4      |
| Buzzer                                             | D5      |
| LED                                                | D6      |
| Line Finder                                        | D7      |
| Spare (port-move experiments)                      | D8      |
| Potentiometer                                      | A0      |
| Spare (leave unconnected: `randomSeed` noise)      | A1      |
| Sound sensor                                       | A2      |
| Light sensor                                       | A3      |
| OLED, Temp & Humidity, Air Pressure, Accelerometer | I2C     |

## Libraries

Install these once via the bridge web interface **Libraries** tab:

| Library                | Needed from                                                        |
| ---------------------- | ------------------------------------------------------------------ |
| `Servo` (by Arduino)   | `06.servoMotor` onwards                                           |
| `Arduino_SensorKit`   | `09.I2C` (OLED + kit I2C sensors; installs U8g2 automatically)    |

The Ultrasonic library is bundled inside `07.ultrasonicAndFunctions` and needs no install.

## Links

1. [Arduino Sensor Kit documentation](https://sensorkit.arduino.cc/)
2. [Design Toolkit](https://tempehs.github.io/designToolKit/)
3. [TempeHS Arduino Boilerplate](https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate) including the school sensor, module, shield and electronic component catalogue
