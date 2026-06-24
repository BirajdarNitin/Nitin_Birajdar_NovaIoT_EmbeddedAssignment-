#include "sensor_manager.h"

#include <Wire.h>

#include <Adafruit_SHT31.h>

Adafruit_SHT31 sht31;

#define DOOR_PIN 25

#define LIGHT_PIN 34

#define VIBRATION_PIN 27

void initializeSensors()
{
sht31.begin(0x44);

pinMode(DOOR_PIN,INPUT_PULLUP);

pinMode(VIBRATION_PIN,INPUT);
}

bool readSensors(SensorData &data)
{
data.temperature=sht31.readTemperature();

data.humidity=sht31.readHumidity();

if(isnan(data.temperature)||isnan(data.humidity))
{
return false;
}

data.doorOpen=!digitalRead(DOOR_PIN);

data.lightLevel=analogRead(LIGHT_PIN);

data.vibration=digitalRead(VIBRATION_PIN);

data.batteryVoltage=12.3;

return true;
}