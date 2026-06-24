#ifndef EVENT_LOGGER_H

#define EVENT_LOGGER_H

#include "classifier.h"

#include "sensor_manager.h"

void initializeLogger();

void logEvent(String event);

void logSensorData(SensorData&,SystemState);

void printSystemStatus(SensorData&,SystemState);

#endif