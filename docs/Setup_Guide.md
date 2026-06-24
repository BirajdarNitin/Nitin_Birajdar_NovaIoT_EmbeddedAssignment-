# Setup Guide

## Prerequisites

Install the following software:

### Arduino IDE

Download and install Arduino IDE.

### ESP32 Board Package

Open Arduino IDE.

Go to:

Tools → Board → Board Manager

Search:

ESP32

Install:

ESP32 by Espressif Systems

## Required Libraries

Install these libraries:

### Adafruit SHT31

Library Manager:

Adafruit SHT31

### SD Library

Usually pre-installed.

### Preferences Library

Included with ESP32 package.

## Hardware Connections

### SHT31

| SHT31 | ESP32  |
| ----- | ------ |
| VCC   | 3.3V   |
| GND   | GND    |
| SDA   | GPIO21 |
| SCL   | GPIO22 |

### Reed Switch

| Reed Switch | ESP32  |
| ----------- | ------ |
| Signal      | GPIO25 |
| GND         | GND    |

### LDR

| LDR           | ESP32  |
| ------------- | ------ |
| Analog Output | GPIO34 |

### SW420

| SW420          | ESP32  |
| -------------- | ------ |
| Digital Output | GPIO27 |

### RGB LED

| LED   | ESP32 |
| ----- | ----- |
| Red   | GPIO2 |
| Green | GPIO4 |
| Blue  | GPIO5 |

### Buzzer

| Buzzer | ESP32  |
| ------ | ------ |
| Signal | GPIO15 |

## Uploading Firmware

1. Connect ESP32 using USB cable.
2. Open firmware/main.ino
3. Select ESP32 Dev Module.
4. Select COM Port.
5. Click Upload.

## Running the System

Open Serial Monitor.

Baud Rate:

115200

The system will begin monitoring environmental conditions automatically.

## Expected Output

The serial monitor will display:

* Temperature
* Humidity
* Door status
* System state
* Alert messages

The monitoring cycle repeats every 5 seconds by default.
