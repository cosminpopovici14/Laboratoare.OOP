#pragma once
#include "Car.h"
#include "Circuit.h"
class Volvo : public Car
{
public:
	Volvo();
	int GetFuelCapacity();
	int GetFuelConsumption();
	int GetAverageSpeed();
};

