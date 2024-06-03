#pragma once
#include "Car.h"
#include "weather.h"
class Circuit
{
	private:
		int Length;
		Car* cars[100];
		Car* Rankings[100];
		int RankingTimes[100];
		Car* NotFinished[100];
		int contor1 = 0;
		int contor2 = 0;
		int contor3 = 0;
		Weather_Enum Weather;
	public:
		void SetLength(int x);
		void SetWeather(Weather_Enum weather);
		void AddCar(Car* car);
		Weather_Enum GetWeather();
		void Race();
		void Sort();
		void ShowFinalRanks();
		void ShowWhoDidNotFinish();

};

