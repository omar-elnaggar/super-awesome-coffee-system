#include "Thermostat.h"

Thermostat::Thermostat(const WaterHeatingElement& waterHeater, const WarmingPlate& plateWarmer)
{

}


int Thermostat::getPlateTemp() const
{
	return plateTemp;
}


int Thermostat::getWaterTemp() const
{
	return waterTemp;
}

void Thermostat::setPlateTemp(const int& plateTemp)
{
	this->plateTemp = plateTemp;
}

void Thermostat::setWaterTemp(const int& waterTemp)
{
	this->waterTemp = waterTemp;
}

void Thermostat::toggleWaterHeating()
{
	waterHeater.togglePowerState();
	if (waterHeater.getPowerState())
	{
		cout << "Water Heater Powered On" << endl;
	}
	else
	{
		cout << "Water Heater Powered Off" << endl;
	}
}

void Thermostat::togglePlateWarming()
{
	plateWarmer.togglePowerState();
	if (plateWarmer.getPowerState())
	{
		cout << "Plate Warmer Powered On" << endl;
	}
	else
	{
		cout << "Plate Warmer Powered Off" << endl;
	}
}