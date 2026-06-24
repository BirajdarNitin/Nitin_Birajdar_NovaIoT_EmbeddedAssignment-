#include "alert_manager.h"

#define GREEN_LED 2

#define YELLOW_LED 4

#define RED_LED 5

#define BUZZER 15

void initializeAlerts()
{
pinMode(GREEN_LED,OUTPUT);

pinMode(YELLOW_LED,OUTPUT);

pinMode(RED_LED,OUTPUT);

pinMode(BUZZER,OUTPUT);
}

void triggerAlert(SystemState state)
{
digitalWrite(GREEN_LED,LOW);

digitalWrite(YELLOW_LED,LOW);

digitalWrite(RED_LED,LOW);

digitalWrite(BUZZER,LOW);

switch(state)
{
case NORMAL:

digitalWrite(GREEN_LED,HIGH);

break;

case WARNING:

digitalWrite(YELLOW_LED,HIGH);

break;

case CRITICAL:

digitalWrite(RED_LED,HIGH);

digitalWrite(BUZZER,HIGH);

break;
}
}