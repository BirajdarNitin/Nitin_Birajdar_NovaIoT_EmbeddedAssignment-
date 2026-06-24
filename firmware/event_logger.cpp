#include "event_logger.h"

void initializeLogger()
{
}

void logEvent(String event)
{
Serial.println(event);
}

void logSensorData(SensorData &data,SystemState state)
{
Serial.print("TEMP:");

Serial.println(data.temperature);

Serial.print("HUM:");

Serial.println(data.humidity);

Serial.print("DOOR:");

Serial.println(data.doorOpen);

Serial.print("LIGHT:");

Serial.println(data.lightLevel);

Serial.print("VIBRATION:");

Serial.println(data.vibration);

Serial.print("BATTERY:");

Serial.println(data.batteryVoltage);

Serial.print("STATE:");

Serial.println(state);
}

void printSystemStatus(SensorData &data,SystemState state)
{
Serial.println("----------------");

Serial.print("Temperature: ");

Serial.println(data.temperature);

Serial.print("Humidity: ");

Serial.println(data.humidity);

Serial.print("State: ");

Serial.println(state);

Serial.println("----------------");
}
