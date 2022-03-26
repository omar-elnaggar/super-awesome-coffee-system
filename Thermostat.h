#pragma once
#include "WaterHeatingElement.h"
#include "WarmingPlate.h"

class Thermostat
{
private:

	//heating elements as members to access toggle methods.
	WaterHeatingElement waterHeater;
	WarmingPlate plateWarmer;

	int waterTemp = 0;
	int plateTemp = 0;

public:
	Thermostat(const WaterHeatingElement& waterHeater, const WarmingPlate& plateWarmer);

	int getPlateTemp() const;
	int getWaterTemp() const;

	//for testing purposes
	void setWaterTemp(const int& waterTemp);
	void setPlateTemp(const int& plateTemp);


	//call power toggle on heating elements
	void toggleWaterHeating();
	void togglePlateWarming();
	

};