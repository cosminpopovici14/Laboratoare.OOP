#include "Seat.h"
#include "Circuit.h"

Seat::Seat()
{
	fuel_capacity = GetFuelCapacity();
	fuel_consumption = GetFuelConsumption();
	average_speed = GetAverageSpeed();
}
int Seat::GetFuelCapacity()
{
	return 200;
}

int Seat::GetFuelConsumption()
{
	return 4;
}

int Seat::GetAverageSpeed()
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
