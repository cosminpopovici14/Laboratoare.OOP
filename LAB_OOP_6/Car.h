#pragma once
#include "weather.h"
class Car
{
	public:
		int fuel_capacity;
		int fuel_consumption;
		int average_speed;
		Car() {  };
		virtual int GetFuelCapacity();
		virtual int GetFuelConsumption();
		virtual int GetAverageSpeed();
		virtual ~Car() {};

};

