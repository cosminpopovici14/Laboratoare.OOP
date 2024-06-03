#pragma once
#include "Car.h"
#include "Circuit.h"
class Seat : public Car
{
public:
	Seat();
	int GetFuelCapacity();
	int GetFuelConsumption();
	int GetAverageSpeed();
};

