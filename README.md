# AppleJuice

AppleJuice refactored to fit for CapibaraZero fw.

> ### 🚫 Warning
> Only use this on devices you own or when you have permisson to use it.\
> This project is made for educational purposes ONLY and is NOT made to break laws and/or\
> for personal gain. Everythin is provided as-is and has no warranty so if your break any of your devices.

# The iOS 17 "BLE Crash Exploit"
The exploit was originaly developed and discovered by ECTO-1A. I ported it to the ESP32 and to RPi (and any devices that can run python). The scipts are meant for the ESP32, as the ESP8266 doesnt have BLE. The exploit causes the device to crash (works fastest while it is locked on the homescreen).

# Testing
This script was tested with and at the time of writing, works on:

ESP32-S3: <br>
• iPhone 14 Pro - iOS 17.2 (21C5029g)<br>
• iPhone 14 Pro - iOS 17.1 (21B506 & 21B74)<br>

ESP-WROOM-32: <br>
• iPhone 12 Pro - iOS 17.0 (21A329)<br>

# Behavior
The iPhone starts to freeze after a few seconds of it getting spammed with BLE pairing requests. After a random looking amount of time the iPhone turns completely black and you can now force restart it (Volume UP, Volume Down, Hold power button), or, alternatively, wait for it to restart by itself.

# Contributors:
<a href="https://github.com/ECTO-1A">­@ECTO-1A</a>: Found the exploit<br>
<a href="https://github.com/Willy-JL">­@WillyJL</a>: Portet the exploit to Flipper Zero<br>
<a href="https://github.com/RapierXbox">@RapierXbox</a>: Originally wrote this exploit for ESP32