# Barrier_control_system_STM32

Project Description
This project is a parking barrier control system implemented on an STM32 microcontroller.
The system detects a vehicle, verifies an access code via Bluetooth, and controls a barrier mechanism accordingly.
Additionally, it monitors environmental conditions (temperature and humidity) and displays system status on an LCD.
# 🚧 STM32 Parking Barrier Control System

Embedded parking barrier control system based on an STM32 microcontroller.
The project combines vehicle detection, Bluetooth authentication, environmental monitoring, and real-time barrier control using multiple communication protocols and peripherals.

---

# 📌 Project Overview

The system detects approaching vehicles using an ultrasonic sensor and requires the user to enter an access code via Bluetooth communication. After successful verification, the barrier opens automatically using a servo motor controlled by PWM.

Additionally, the system monitors temperature and humidity using a DHT11 sensor and displays current system information on an I2C LCD display.

The project was developed to gain practical experience with STM32 embedded systems programming, peripheral configuration, communication protocols, and real-time hardware interaction.

---

# ✨ Features

* Vehicle detection using ultrasonic distance measurement
* Bluetooth access control via UART communication
* 4-digit code verification system
* PWM-based servo motor barrier control
* Temperature and humidity monitoring (DHT11)
* LCD status display using I2C communication
* Buzzer feedback for authentication errors
* UART debugging and real-time monitoring
* Automatic barrier closing after vehicle departure

---

# ⚙️ Technologies & Concepts

* C
* STM32 HAL Library
* STM32CubeIDE
* UART communication
* I2C communication
* PWM signal generation
* Timer configuration
* GPIO control
* Embedded state-machine logic
* Real-time sensor data processing

---

# 🔄 System Workflow

```text
Vehicle detected
        ↓
Bluetooth authentication request
        ↓
User enters 4-digit access code
        ↓
Code verification
   ↙                 ↘
Valid               Invalid
   ↓                   ↓
Barrier opens      Error message
   ↓               Buzzer alert
Vehicle passes
   ↓
Barrier closes automatically
```

---

# 🔌 Communication Interfaces

| Interface | Purpose                                  |
| --------- | ---------------------------------------- |
| UART      | Bluetooth communication & debugging      |
| I2C       | LCD display communication                |
| PWM       | Servo motor control                      |
| GPIO      | Sensor and buzzer handling               |
| Timers    | Distance measurement & timing operations |

---

# 🛠 Hardware Components

* STM32 microcontroller
* HC-06 Bluetooth module
* Ultrasonic distance sensor
* DHT11 temperature & humidity sensor
* Servo motor
* I2C LCD display
* Buzzer

# 🚀 How It Works

The system continuously measures:

* vehicle distance using the ultrasonic sensor,
* environmental temperature and humidity using DHT11.

When a vehicle is detected within a predefined distance threshold:

1. The system requests an access code via Bluetooth.
2. The user sends a 4-digit code using the HC-06 module.
3. The code is verified by the STM32 controller.
4. If authentication succeeds:

   * the barrier opens using PWM-controlled servo movement,
   * debug information is sent via UART.
5. If authentication fails:

   * an error message is displayed,
   * the buzzer is activated.
6. After the vehicle passes, the barrier closes automatically.

---

# ⚠️ Challenges

* Accurate ultrasonic distance measurements
* Stable DHT11 timing communication
* Synchronization of multiple peripherals
* Reliable UART data handling
* Real-time event coordination

---


# 📚 Project Goals

The main purpose of this project was to gain practical experience with:

* STM32 embedded systems programming,
* communication protocols,
* sensor integration,
* actuator control,
* real-time hardware interaction,
* embedded software architecture.

---

# 👨‍💻 Author

Created by Jakub Łuczyński
