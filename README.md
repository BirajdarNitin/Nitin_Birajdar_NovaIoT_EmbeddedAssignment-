# FleetGuard Industrial IoT Monitoring System

## Project Overview

FleetGuard is an Industrial IoT edge monitoring device designed for refrigerated pharmaceutical transportation containers.

The device continuously monitors environmental conditions, detects abnormalities, generates alerts, stores historical data, and is architected for future cloud integration.

## Features

* Temperature monitoring
* Humidity monitoring
* Door status monitoring
* Light detection
* Vibration detection
* Local intelligence engine
* Event logging
* Alert generation
* Configuration management
* Future cloud readiness

## Hardware

ESP32 DevKit V1

SHT31

Reed Switch

LDR

SW420

MicroSD

RGB LED

Buzzer

## Setup Instructions

1. Install Arduino IDE

2. Install ESP32 Board Package

3. Install libraries

Adafruit SHT31

SD

Preferences

4. Upload firmware

5. Connect sensors

6. Open Serial Monitor

## Assumptions

Stable vehicle power supply

Container temperature range 2°C to 8°C

Internet connectivity is optional

## Limitations

No actual cloud implementation

Single sensor redundancy

GPS not implemented

## Future Work

OTA updates

Cellular support

Predictive analytics

Fleet dashboard
