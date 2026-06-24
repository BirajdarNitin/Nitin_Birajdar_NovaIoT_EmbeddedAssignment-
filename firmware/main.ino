#include "sensor_manager.h"
#include "classifier.h"
#include "alert_manager.h"
#include "event_logger.h"
#include "config_manager.h"

SensorData sensorData;
SystemState currentState;

void setup()
{
  Serial.begin(115200);

  initializeConfig();

  initializeSensors();

  initializeAlerts();

  initializeLogger();

  logEvent("SYSTEM_BOOT");
}

void loop()
{
  bool success = readSensors(sensorData);

  if(!success)
  {
    logEvent("SENSOR_FAILURE");

    delay(2000);

    return;
  }

  currentState = classifyCondition(sensorData);

  triggerAlert(currentState);

  logSensorData(sensorData,currentState);

  printSystemStatus(sensorData,currentState);

  delay(getSamplingInterval());
}