# PETROL-PURITY-DETECTION-
Petrol Purity Detection System using an IR sensor and Arduino. Reads fuel transparency and displays results on an I2C LCD. Green LED shows pure petrol, red LED and buzzer indicate impurity. Simple, low-cost solution for quick petrol quality testing.
Petrol Purity Detection System using IR Sensor

A simple and effective Arduino-based system designed to detect the purity of petrol using an IR transparency sensor, and display results on an I2C LCD along with LED and buzzer indicators.

🚀 Project Overview

This project measures the transparency of petrol using an infrared (IR) sensor. Pure petrol allows more IR light to pass through, while impure or contaminated petrol reduces the transmission.
The system reads the analog value from the IR sensor and compares it to a predefined threshold (810). Based on the reading, the system determines whether the petrol is PURE or IMPURE.

🎯 Key Features

📟 I2C LCD display showing IR sensor readings and purity status

🔴🟢 LED indicators for instant visual feedback

Green LED → Pure Petrol

Red LED → Impure Petrol

🔊 Buzzer alert when petrol is impure

🔍 Accurate detection using analog IR sensor

⚡ Powered by Arduino UNO

🔧 Hardware Used

Arduino UNO

4-pin IR Sensor (VCC, GND, OUT, EN)

I2C 16×2 LCD Display (SDA, SCL, VCC, GND)

Green LED

Red LED

Buzzer

Jumper wires

🔌 Circuit Connections
IR Sensor → Arduino
IR Pin	Arduino Pin
VCC	5V
GND	GND
OUT	A0
EN	5V
I2C LCD → Arduino
LCD Pin	Arduino Pin
SDA	A4
SCL	A5
VCC	5V
GND	GND
LEDs & Buzzer
Component	Arduino Pin
Green LED	D8
Red LED	D9
Buzzer	D10
🧠 Working Principle

The IR sensor detects how much light passes through the petrol.

Pure petrol gives an IR reading of around 810 or lower.

Impure petrol gives values greater than 810.

The system displays the sensor value and purity result on the LCD.

LEDs and buzzer provide additional visual and audio alerts.

📝 Threshold Logic
If IR value <= 810 → Pure Petrol  
If IR value > 810 → Impure Petrol  

🧑‍💻 Source Code

(You can insert your final Arduino code here.)

📌 Applications

Fuel quality testing stations

Automotive workshops

Research and educational projects

Portable petrol quality check devices

📷 Future Enhancements

Bluetooth/WiFi mobile app interface

Data logging on cloud

Percentage purity calculation

Waterproof fuel-testing container
