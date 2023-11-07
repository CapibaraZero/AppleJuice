# SourApple


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

RPi 4: <br>
• iPhone XS - iOS 17.0 (21A329)<br>
• iPhone 12 Pro - iOS 17.1 Beta 2

# Behavior
The iPhone starts to freeze after a few seconds of it getting spammed with BLE pairing requests. After a random looking amount of time the iPhone turns completely black and you can now force restart it (Volume UP, Volume Down, Hold power button), or, alternatively, wait for it to restart by itself. While testing (on an ESP32-S3), it reaches stable temps at ~57c, so heat shouldn't be of concern. Some PI models report to get a little bit hotter than that, however it still should not be an issue.

# Contributors:
<a href="https://github.com/ECTO-1A">­@ECTO-1A</a>: Found the exploit<br>
<a href="https://github.com/Willy-JL">­@WillyJL</a>: Portet the exploit to Flipper Zero<br>
<a href="https://github.com/Amachik">­@Amachik</a>: Helped make the RPi scripts<br>

# Things you don't want to know
I spilled coffee all over a lot of electronics while writing this :(

# Need help?
My discord if you need help: rapierxbox
