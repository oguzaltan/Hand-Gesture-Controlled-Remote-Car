# Hand Gesture Controlled VR Remote Car

## Introduction
In this project, the aim is to design a hand gesture controlled remote car with a VR cam installed on top. The gesture control is done by a gyroscope and an accelerometer, installed on a glove alongside with an Arduino Uno to handle the communication between the user and the car. The communication is done via Bluetooth connection and to receive the signal and control the motors and the car, FRDM-KL25Z board is used. All the code is in embedded-C language. A small action cam is mounted on top of the car and the video feed is streamed to smartphone connected to VR glasses, so the user is fully emerged to the experience. 

## Design Specification Plan
First, we use 4WD robot car chassis and 4 servo motors with wheels. On the chassis, there is FRDM-KL25Z, a motor driver, battery, Bluetooth receiver. All of these sensors work together to control the motion of the vehicle, according to the gesture input coming from user’s hand gestures. For the hand glove part, an Arduino, gyroscope/accelerometer and another transmitter Bluetooth module are used to create the signal to control the car. Two Bluetooth modules are paired in Master-Slave configuration. 

For gesturing, if the users hold their hand level, there is not a signal present, so the car does move. Tilting the hand forward means acceleration for the car which makes the car move forward. Conversely, tilting the hand backward means rear acceleration, which makes the car move backward. If the users tilt their hand clockwise, only the left 2 wheels work so the car steers to right, and vice versa for the counter clockwise motion. 

Finally, an action cam is installed on the car and the video feed is streamed over its own wireless network, with its own smartphone application.

## Proposed Design Methodology
The sensors and modules are all programmed with Embedded-C Language, on the FRDM-KL25Z and Arduino Uno. 

Required peripherals are as follows:
•	FRDM-KL25Z Board 
•	Arduino Uno
•	2 * HC-05 Bluetooth Modules
•	MPU6050 Gyroscope/Accelerometer
•	4 * SG90 Servo Motors with Wheels
•	L298N Dual DC Motor Driver
•	Battery
•	Jumpers
•	LEDs
•	Glove
•	Action Cam
•	VR Glasses
•	4WD Car Chassis 
