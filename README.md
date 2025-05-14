# 🌞 Auto-Brite: Smart LED Light Adjustment with Ambient Detection 🌟
Auto-Brite is a smart lighting system that dynamically adjusts the brightness of an LED array based on real-time ambient light levels. Using a photoresistor and an Arduino, this project ensures that the LED brightness increases as the environment gets brighter — creating a natural and seamless lighting experience.

## 🚀 Features
🔆 Real-time Ambient Light Sensing
Continuously reads ambient light intensity using a photoresistor.

💡 Adaptive LED Brightness
LEDs automatically get brighter as surrounding light increases.

🧠 Smooth Transition Algorithm
Filters out sudden light changes to prevent flickering.

⚡ Energy-Efficient & Simple Design
Minimal components, maximum impact.

## 🛠️ Components Needed
Component	Quantity
Arduino UNO	1
Photoresistor (LDR)	1
10kΩ Resistor	1
LED Array / Strip	1
Breadboard & Wires	as needed

## 📝 How It Works
The photoresistor reads the surrounding light level.

The Arduino maps this input to control the LED brightness.

Brighter surroundings → brighter LEDs.

Smooth filtering ensures a flicker-free experience.

## 🧰 Quick Setup
Connect the photoresistor to analog pin A0 (voltage divider with 10kΩ resistor).

Connect the LED array to PWM pin D9 (use transistor if driving high current).

Upload the Auto-Bright Arduino Code.

Power up and watch Auto-Bright adapt in real-time!

## 🎯 Applications
Smart Home Lighting

Mood Lighting for Workspaces

Adaptive Display Backlights

Energy-Saving Light Fixtures
