#ifndef ALERT_MANAGER_H

#define ALERT_MANAGER_H

#include "classifier.h"

void initializeAlerts();

void triggerAlert(SystemState state);

#endif