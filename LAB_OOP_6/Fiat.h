#pragma once
#include "Car.h"
#include "Circuit.h"
class Fiat : public Car
{
public:
	Fiat();
	int GetFuelCapacity();
	int GetFuelConsumption();
	int GetAverageSpeed();
};

