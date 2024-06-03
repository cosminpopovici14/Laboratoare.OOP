#include "BMW.h"
#include "Circuit.h"

BMW::BMW()
{
	fuel_capacity = GetFuelCapacity();
	fuel_consumption = GetFuelConsumption();
	average_speed = GetAverageSpeed();
}
int BMW::GetFuelCapacity()
{
	return 200;
}

int BMW::GetFuelConsumption()
{
	return 4;
}

int BMW::GetAverageSpeed()
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
