#pragma once
#include "Car.h"
#include "Circuit.h"
class RangeRover : public Car
{
public:
	RangeRover();
	int GetFuelCapacity();
	int GetFuelConsumption();
	int GetAverageSpeed();
};

