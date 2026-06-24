#ifndef SENSOR_MANAGER_H

#define SENSOR_MANAGER_H

struct SensorData
{
float temperature;

float humidity;

bool doorOpen;

int lightLevel;

bool vibration;

float batteryVoltage;
};

void initializeSensors();

bool readSensors(SensorData &data);

#endif