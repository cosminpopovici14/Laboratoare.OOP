#include "RangeRover.h"
#include "Circuit.h"

RangeRover::RangeRover()
{
	fuel_capacity = GetFuelCapacity();
	fuel_consumption = GetFuelConsumption();
	average_speed = GetAverageSpeed();
}
int RangeRover::GetFuelCapacity()
{
	return 200;
}

int RangeRover::GetFuelConsumption()
{
	return 4;
}

int RangeRover::GetAverageSpeed()
{
	if (RAIN)
	{
		return average_speed * 0.6;
	}
	if (SNOW)
	{
		return average_speed * 0.3;
	}
	else return average_speed;
}
