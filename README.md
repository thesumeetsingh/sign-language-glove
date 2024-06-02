# sign-language-glove
A glove with sensors which converts the sign made by the person to text.
Sign Language Glove
This repository contains the code and instructions for building a sign language glove using an Arduino Uno board and flex sensors. The glove translates hand gestures into text, helping users communicate in sign language.
![image](https://github.com/thesumeetsingh/sign-language-glove/assets/148633096/922a101d-7c98-427d-9667-f3d82ea593dc)

## Table of Contents
- Introduction
- Components
- Circuit Diagram
- Setup and Installation
- Code Explanation
- Usage
- Contributing
- License


## Introduction
The Sign Language Glove project aims to assist individuals in communicating using sign language. The glove is equipped with five flex sensors, each attached to a finger, to detect specific gestures. The Arduino Uno reads the sensor values and translates them into corresponding text messages.

## Components
- Arduino Uno
- 5 Flex Sensors
- Glove
- Connecting Wires
- Breadboard (optional for testing)
- Resistors (as required for the flex sensors)

## Circuit Diagram
![image](https://github.com/thesumeetsingh/sign-language-glove/assets/148633096/5e11b35a-3113-4f8a-96c6-d91dd3b8a52b)

## Setup and Installation
- 1. Assemble the Circuit: Connect the flex sensors to the analog pins (A0 to A4) of the Arduino Uno. Ensure the sensors are properly fitted onto the fingers of the glove.

- 2. Install Arduino IDE: Make sure you have the Arduino IDE installed on your computer. You can download it from the Arduino website.

- 3. Upload the Code:


    - Open the Arduino IDE.
    - Copy the code from sign_language_glove.ino file.
    - Paste it into the Arduino IDE.
    - Connect the Arduino Uno to your computer.
    - Select the correct board and port from the Tools menu.
    - Upload the code to the Arduino.


## Code Explanation
The code reads analog values from the flex sensors and translates specific ranges into corresponding text messages. The values function prints the sensor readings, while the loop function checks the sensor values and prints messages based on predefined conditions.


## Usage
- 1. Wear the glove with the flex sensors.
- 2. Connect the Arduino Uno to your computer.
- 3. Open the Serial Monitor from the Arduino IDE.
- 4. Make different hand gestures, and observe the corresponding text output in the Serial Monitor.
