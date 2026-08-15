# 📟 I2C LCD Display — Text & Scrolling Message (Arduino)

A beginner-friendly project that displays static text (name, class, roll) followed by a smooth **scrolling message** on a 16x2 I2C LCD screen.

## ✨ What It Does
1. Shows **"Name: Rahat"** for 3 seconds
2. Clears and shows **"Class: N/A"** / **"Roll: 100"** for 3 seconds
3. Clears and scrolls **"Bangabashi School"** smoothly across the screen, on repeat

## 🧰 Components Required
| Component | Quantity | Notes |
|---|---|---|
| Arduino Uno / ESP32 Board | 1 | Either works |
| 16x2 LCD with I2C Module (PCF8574) | 1 | I2C address usually `0x27` or `0x3F` |
| Jumper Wires (M-F / M-M) | 4 | |
| Breadboard | 1 | Optional, for cleaner wiring |
| USB Cable | 1 | For power & programming |

## 🔌 Connection / Pinout

| LCD (I2C Module) Pin | Arduino Uno | ESP32 |
|---|---|---|
| GND | GND | GND |
| VCC | 5V | 5V / 3.3V* |
| SDA | A4 | GPIO 21 |
| SCL | A5 | GPIO 22 |

> *Check your specific I2C LCD backpack's voltage rating before connecting to an ESP32.

## 📚 Required Libraries
Install via Arduino IDE Library Manager:
- `LiquidCrystal_I2C` (by Frank de Brabander or Marco Schwartz — search "LiquidCrystal I2C")
- `Wire` (built-in)

## ⚙️ Setup Instructions
1. Open `Day_2_LCD_Screen_code.ino` in Arduino IDE.
2. Wire the I2C LCD module as shown in the pinout table above.
3. If your screen doesn't light up or shows garbled text, confirm the I2C address (`0x27` in the code) — use an I2C scanner sketch if unsure, and update this line if needed:
   ```cpp
   LiquidCrystal_I2C lcd(0x27, 16, 2);
   ```
4. Select your board and correct COM port, then click **Upload**.
5. Watch your name/class/roll appear, followed by a scrolling school name banner.

## 🧠 What You'll Learn
- I2C communication basics (SDA/SCL)
- Using the `LiquidCrystal_I2C` library (`setCursor`, `print`, `clear`, `scrollDisplayLeft`)
- Creating simple text animations on character LCDs

## 📺 Credit & Links
Project by **RAZ**

- 🎥 YouTube: [Tech Raz Friday](https://www.youtube.com/@razfriday)
- 📘 Facebook: [facebook.com/mdraz1995](https://www.facebook.com/mdraz1995)

If this helped you learn Arduino, consider subscribing for more beginner-friendly embedded projects!

## 📄 License
Free to use and modify for personal and educational projects. Credit to **Tech Raz Friday** is appreciated when sharing or republishing.
