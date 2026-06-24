# Hardware Design Document

## System Overview

The FleetGuard device is an edge monitoring system installed inside refrigerated transport containers.

The system continuously monitors environmental conditions and performs local processing before generating alerts and storing data.

---

## Hardware Architecture

Input Layer:

* SHT31
* Reed Switch
* LDR
* SW420

Processing Layer:

* ESP32

Output Layer:

* RGB LED
* Active Buzzer

Storage Layer:

* MicroSD Card

Communication Layer:

* Wi-Fi (future MQTT integration)

---

## Power Architecture

12V Vehicle Supply

↓

2A Fuse

↓

Reverse Polarity Protection

↓

TVS Surge Protection

↓

12V to 5V Buck Converter

↓

5V to 3.3V LDO Regulator

↓

ESP32 and Peripheral Components

---

## GPIO Assignment Table

| Component   | ESP32 GPIO |
| ----------- | ---------- |
| SHT31 SDA   | GPIO21     |
| SHT31 SCL   | GPIO22     |
| Reed Switch | GPIO25     |
| LDR         | GPIO34     |
| SW420       | GPIO27     |
| Green LED   | GPIO2      |
| Yellow LED  | GPIO4      |
| Red LED     | GPIO5      |
| Buzzer      | GPIO15     |

---

## Operating Logic

1. Read sensors every 5 seconds.
2. Validate readings.
3. Classify operating condition.
4. Generate alerts.
5. Store events.
6. Prepare future cloud packets.

---

## Environmental Thresholds

Temperature:

Normal: 2°C to 8°C

Warning: 0°C to 2°C and 8°C to 10°C

Critical: Below 0°C and above 10°C

Humidity:

Normal: 40% to 60%

Warning: 35% to 40% and 60% to 70%

Critical: Below 35% and above 70%

---

## Reliability Features

* Local processing
* Sensor validation
* Future watchdog support
* Persistent storage
* Fault tolerance

---

## Future Hardware Improvements

* GPS Module
* SIM7600 Cellular Module
* Battery Backup
* OTA Update Support
* Redundant Sensors
