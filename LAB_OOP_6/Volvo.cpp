#include "Volvo.h"
#include "Circuit.h"

Volvo::Volvo()
{
	fuel_capacity = GetFuelCapacity();
	fuel_consumption = GetFuelConsumption();
	average_speed = GetAverageSpeed();
}
int Volvo::GetFuelCapacity()
{
	return 200;
}

int Volvo::GetFuelConsumption()
{
	return 4;
}

int Volvo::GetAverageSpeed()
{
	if(RAIN)
	{
		return average_speed * 0.6 ;
	}
	if (SNOW)
	{
		return average_speed * 0.3;
	}
	else return average_speed;
}
