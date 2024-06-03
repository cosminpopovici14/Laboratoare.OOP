#include "Fiat.h"
#include "Circuit.h"

Fiat::Fiat()
{
	fuel_capacity = GetFuelCapacity();
	fuel_consumption = GetFuelConsumption();
	average_speed = GetAverageSpeed();
}
int Fiat::GetFuelCapacity()
{
	return 200;
}

int Fiat::GetFuelConsumption()
{
	return 4;
}

int Fiat::GetAverageSpeed()
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
