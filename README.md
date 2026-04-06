# Barrier_control_system_STM32

Project Description
This project is a parking barrier control system implemented on an STM32 microcontroller.
The system detects a vehicle, verifies an access code via Bluetooth, and controls a barrier mechanism accordingly.
Additionally, it monitors environmental conditions (temperature and humidity) and displays system status on an LCD.

Features
Vehicle detection using an ultrasonic distance sensor
Access control via Bluetooth (UART communication)
Code verification (correct / incorrect handling)
Barrier control using PWM (servo motor)
Temperature and humidity measurement (DHT11)
LCD display (I2C) for real-time information
Buzzer signaling for user feedback
Debug output via UART

How It Works
The system continuously measures:
distance (ultrasonic sensor)
temperature and humidity (DHT11)
When a vehicle is detected (distance < 11 cm):
the system prompts the user to enter an access code
The user sends a 4-digit code via Bluetooth:
correct code → barrier opens
incorrect code → error message + buzzer alert
After successful verification:
the barrier opens (PWM control)
vehicle information is printed to UART (debug)
When the vehicle leaves:
the barrier closes automatically

Hardware Components
STM32 microcontroller
HC-06 Bluetooth module
DHT11 temperature & humidity sensor
Ultrasonic distance sensor
LCD display (I2C)
Buzzer
Servo motor (barrier mechanism)

Software & Technologies
C (STM32 HAL library)
UART (Bluetooth communication & debugging)
I2C (LCD communication)
PWM (servo control)
Timers (input capture & signal measurement)

Real-time sensor data processing
Implementation of access control logic
Practical use of communication protocols (UART, I2C)
