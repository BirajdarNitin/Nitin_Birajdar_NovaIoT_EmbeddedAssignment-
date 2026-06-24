# Component Selection

## Objective

Select reliable, cost-effective, and scalable hardware components for the FleetGuard Industrial IoT Monitoring System.

---

## Hardware Components

### 1. ESP32 DevKit V1

Purpose:

Main microcontroller responsible for data acquisition, local processing, alert generation, storage management, and future cloud connectivity.

Specifications:

* Dual-core processor
* Clock speed: 240 MHz
* Wi-Fi and Bluetooth support
* Multiple GPIO pins
* OTA update support

Why selected?

* Integrated Wi-Fi
* Large developer ecosystem
* Cost effective
* Easy future cloud integration

Alternative considered:

ESP8266

Reason not selected:

* Lower performance
* Fewer GPIO pins

---

## 2. SHT31 Temperature and Humidity Sensor

Purpose:

Monitor environmental conditions inside refrigerated containers.

Specifications:

* Temperature accuracy: ±0.3°C
* Humidity accuracy: ±2%
* I2C communication

Why selected?

* Better accuracy than DHT22
* Industrial reliability
* Stable readings

Alternative considered:

DHT22

Reason not selected:

* Lower accuracy
* Slower response

---

## 3. Magnetic Reed Switch

Purpose:

Detect door open and close events.

Why selected?

* Simple
* Reliable
* Low power consumption
* Low cost

---

## 4. LDR (Light Dependent Resistor)

Purpose:

Detect unexpected light exposure when the container door opens.

Why selected?

* Very inexpensive
* Easy implementation

---

## 5. SW420 Vibration Sensor

Purpose:

Detect excessive vibration or rough handling.

Why selected?

* Low cost
* Easy integration

---

## 6. MicroSD Card Module

Purpose:

Store event logs and historical records.

Why selected?

* Large storage capacity
* Easy data retrieval

---

## 7. RGB LED

Purpose:

Visual status indication.

State Mapping:

Green = Normal

Yellow = Warning

Red = Critical

---

## 8. Active Buzzer

Purpose:

Audible alert generation.

Why selected?

* Simple implementation
* Immediate operator feedback

---

## Estimated Bill of Materials

| Component      | Quantity | Approximate Cost (INR) |
| -------------- | -------- | ---------------------- |
| ESP32          | 1        | 500                    |
| SHT31          | 1        | 550                    |
| Reed Switch    | 1        | 80                     |
| LDR            | 1        | 20                     |
| SW420          | 1        | 80                     |
| RGB LED        | 1        | 15                     |
| Active Buzzer  | 1        | 30                     |
| MicroSD Module | 1        | 120                    |
| Miscellaneous  | -        | 300                    |

Estimated Total:

₹1700 – ₹2000
