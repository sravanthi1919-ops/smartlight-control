# SMART-LIGHT-CONTROL

COMPANY : CODTECH IT SOLUTIONS

NAME : KOMARA HARSHA KUMAR

INTERN ID : CT04DF2153

DOMAIN : INTERNET OF THINGS

DURATION : 4 WEEKS

MENTOR : NEELA SANTOSH


This project focuses on developing a system to control an LED light using an Arduino microcontroller, with commands issued through a mobile app interface. Due to the absence of physical hardware, the entire setup is implemented virtually using the Tinkercad Circuits platform. The goal is to simulate a real-world Internet of Things (IoT) scenario where a user can remotely control electronic devices using simple and intuitive commands. In this case, the device under control is a basic LED, serving as a practical representation of any controllable electronic system.

The core idea behind the project is to demonstrate the integration between a microcontroller and a user interface, typically provided by a mobile application. Although actual Bluetooth modules and mobile apps cannot be directly simulated within Tinkercad, the platform provides an effective workaround by allowing command input through a serial monitor. This method successfully emulates the communication that would take place between a mobile device and the microcontroller via Bluetooth. The user can enter text-based commands such as "ON" or "OFF" in the serial monitor, which are then read and interpreted by the Arduino in real-time.

The Arduino Uno is programmed to continuously listen for incoming serial data. When it detects a command, it processes the input string and determines the appropriate action to take. For instance, when the command "ON" is received, the Arduino sets a digital output pin to a HIGH state, causing the LED connected to that pin to light up. Similarly, the command "OFF" switches the pin to a LOW state, turning the LED off. This simple logic mirrors the essential behavior of an app-controlled device and lays the groundwork for more complex implementations.

Using Tinkercad Circuits as the simulation platform provides a significant advantage, especially for users who do not have access to physical components like an Arduino board, LED, or Bluetooth module. The simulation is realistic enough to test both the circuitry and the control logic, making it a valuable educational tool. It enables learners to explore microcontroller-based control systems, understand the concept of serial communication, and test real-time responses without any risk of damaging hardware.

This system can serve as a foundational prototype for a wide range of home automation or smart device applications. The current version can be easily expanded to include multiple LEDs, sensors, or other actuators. In a real-world scenario, the serial monitor would be replaced by an actual mobile application, developed using platforms like MIT App Inventor or Blynk, and communication would be handled through a Bluetooth module such as the HC-05. This provides a clear path for scaling the project from simulation to reality.

In conclusion, this project effectively simulates a basic yet meaningful IoT application using Arduino and a mobile-like control interface. It allows users to understand and experience how embedded systems respond to external commands, all within a virtual environment. This simulation not only introduces practical programming and circuit-building skills but also encourages creative thinking in how such systems can be applied in everyday life. It’s an excellent entry point for students, hobbyists, or developers who are beginning their journey into the world of interactive electronics and remote device control.

#OUTPUT

![Image](https://github.com/user-attachments/assets/73ac944d-58b2-47fb-b687-e51b801c3778)
