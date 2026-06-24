# FleetGuard Industrial IoT Monitoring System

## Project Overview

FleetGuard Industrial IoT Monitoring System is an intelligent edge monitoring device designed for refrigerated transport containers carrying pharmaceuticals, vaccines, laboratory samples, and temperature-sensitive chemicals.

The current monitoring process is manual, requiring drivers to periodically inspect environmental conditions. This approach introduces delays in detecting failures, increases the risk of product spoilage, creates compliance challenges, and provides no historical data for analysis.

This project proposes a production-oriented Minimum Viable Product (MVP) using edge computing principles. The system continuously monitors environmental conditions, performs local decision-making, generates alerts, stores operational history, and is designed for future cloud integration.

## Objectives

The primary objectives are:

* Continuously monitor environmental conditions.
* Detect abnormal operating conditions.
* Generate local alerts.
* Store event history locally.
* Support future cloud connectivity.
* Design for large-scale deployment.

## Core Features

### Environmental Monitoring

* Temperature monitoring
* Relative humidity monitoring

### Additional Monitoring

* Door status detection
* Light detection
* Vibration detection
* Battery voltage monitoring

### Local Intelligence

The system classifies operating conditions into:

* Normal
* Warning
* Critical

### Event Logging

The device stores important events such as:

* Sensor failures
* Warning conditions
* Critical conditions
* Device restarts
* Configuration changes

### Alert Mechanism

The system provides local notifications using:

* RGB LED
* Buzzer
* Serial output

### Future Connectivity

The architecture supports future integration with:

* Wi-Fi
* MQTT
* Cloud platforms
* Cellular networks
* LoRaWAN

## Technologies Used

### Hardware

* ESP32 DevKit V1
* SHT31 Temperature and Humidity Sensor
* Reed Switch
* LDR
* SW420 Vibration Sensor
* MicroSD Card Module
* RGB LED
* Active Buzzer

### Software

* Arduino IDE
* C++
* Draw.io
* GitHub

## Design Philosophy

The project prioritizes:

* Reliability
* Maintainability
* Scalability
* Security
* Cost effectiveness
* Future expansion capability

The solution is designed as if it will eventually be deployed across thousands of real-world refrigerated transport containers.
