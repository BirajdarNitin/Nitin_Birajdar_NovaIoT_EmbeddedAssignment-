#include "classifier.h"

SystemState classifyCondition(SensorData &data)
{
if(data.temperature<0||data.temperature>10)
{
return CRITICAL;
}

if(data.humidity<35||data.humidity>70)
{
return CRITICAL;
}

if(data.temperature<2||data.temperature>8)
{
return WARNING;
}

if(data.humidity<40||data.humidity>60)
{
return WARNING;
}

return NORMAL;
}