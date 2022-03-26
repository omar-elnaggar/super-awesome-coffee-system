#pragma once
#include <iostream>

using namespace std;

class HeatingElement
{
private:
	bool powerState = false;
	int powerLevel = 0;



public:

	bool getPowerState() const;
	int getPowerLevel() const;

	void togglePowerState();
	void setPowerLevel(const int& powerLevel);
};
