#pragma once
#include "Car.h"
#include "Circuit.h"
class BMW : public Car
{
public:
	BMW();
	int GetFuelCapacity();
	int GetFuelConsumption();
	int GetAverageSpeed();
};

