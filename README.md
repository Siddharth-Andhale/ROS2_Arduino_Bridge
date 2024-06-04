# ROS2_Arduino_Bridge
This repository contains the necessary code and instructions to create a ROS2 bridge between a Jetson Nano running ROS2 Foxy and an Arduino Mega controlling a Cytron MDD10A motor driver. The setup allows you to control motors connected to the Cytron MDD10A via ROS2 commands sent from the Jetson Nano to the Arduino Mega through a serial connection.

# ROS2 Arduino Bridge for Cytron MDD10A Motor Driver

This repository contains the code and instructions to create a ROS2 bridge between a Jetson Nano running ROS2 Foxy and an Arduino Mega controlling a Cytron MDD10A motor driver. The setup allows control of motors connected to the Cytron MDD10A via ROS2 commands sent from the Jetson Nano to the Arduino Mega through a serial connection.

## Hardware Requirements
- Jetson Nano
- Arduino Mega
- Cytron MDD10A motor driver
- Motors
- Connecting wires
- USB cable for Arduino Mega to Jetson Nano connection

## Connections

| Cytron MDD10A | Arduino Mega |
| ------------- | ------------ |
| PWM1          | Pin 5        |
| DIR1          | Pin 6        |
| PWM2          | Pin 7        |
| DIR2          | Pin 8        |
| GND           | GND          |

Connect the Arduino Mega to the Jetson Nano using a USB cable.

## Software Requirements
- Ubuntu 20.04 on Jetson Nano
- ROS2 Foxy installed on Jetson Nano
- Arduino IDE
