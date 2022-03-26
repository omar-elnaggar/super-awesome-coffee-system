#include "HeatingElement.h"



bool HeatingElement::getPowerState() const
{
	return powerState;
}



int HeatingElement::getPowerLevel() const
{
	return powerLevel;
}


void HeatingElement::togglePowerState()
{
	powerState = (powerState) ? false : true;
}

void HeatingElement::setPowerLevel(const int& powerLevel)
{
	this->powerState = powerLevel;
}