# 04 Analog VU Meter (Potentiometer Control)

## 📋 Description
This project simulates a "VU Meter" or progress bar using 4 LEDs. The system reads an analog signal from a potentiometer and visualizes the intensity level in real-time. It demonstrates the conversion of analog inputs into digital visual outputs.

## 🛠️ Hardware Used
* **Microcontroller:** Arduino Uno.
* **Input:** 10kΩ Potentiometer.
* **Output:** 4x LEDs (Green, Yellow, Red, White).
* **Resistors:** 4x 220Ω (for LEDs).

## 💡 Key Concepts
* **Analog to Digital Conversion (ADC):** Reading values from 0 to 1023 using `analogRead()`.
* **Signal Mapping:** Using the `map()` function to convert sensor data to percentage (0-100%).
* **Control Logic:** Using `if/else` structures to determine the state of each LED based on thresholds.

## 🔌 Pinout
| Component     | Pin |
| :--- | :--- |
| Potentiometer | A0  |
| LED 1 (Low)   | 8  |
| LED 2 (Mid)   | 9  |
| LED 3 (High)  | 10  |
| LED 4 (Max)   | 11  |
