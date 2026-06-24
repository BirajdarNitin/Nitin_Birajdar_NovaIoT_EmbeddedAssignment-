#ifndef CLASSIFIER_H

#define CLASSIFIER_H

#include "sensor_manager.h"

enum SystemState
{
NORMAL,

WARNING,

CRITICAL
};

SystemState classifyCondition(SensorData &data);

#endif