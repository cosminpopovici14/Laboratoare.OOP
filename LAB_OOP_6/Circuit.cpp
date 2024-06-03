#include <iostream>
#include "Circuit.h"
#include "Car.h"
using namespace std;
void Circuit::SetLength(int x)
{
	Length = x;
}
void Circuit::SetWeather(Weather_Enum weather)
{
	Weather = weather;
}
void Circuit::AddCar(Car* car)
{
	cars[++contor1] = car;
}

Weather_Enum Circuit::GetWeather()
{
	return Weather;
}

void Circuit::Race()
{
	for (int i = 1; i <= contor1; i++)
	{
		if (cars[i]->fuel_capacity < cars[i]->fuel_consumption * Length)
			NotFinished[++contor2] = cars[i];
		else { 
			Rankings[++contor3] = cars[i];
			RankingTimes[contor3] = Length / cars[i]->average_speed;
			}

	}
}

void Circuit::Sort()
{
	for (int i = 1; i <= contor3; i++)
		for (int j = 1; j <= contor3; j++)
			if (RankingTimes[i] > RankingTimes[j])
			{
				int aux = RankingTimes[i];
				Car* aux1 = Rankings[i];
				RankingTimes[i] = RankingTimes[j];
				Rankings[i] = Rankings[j];
				RankingTimes[j] = aux;
				Rankings[j] = aux1;
			}
}

void Circuit::ShowFinalRanks()
{
	for (int i = 1; i <= contor3; i++)
		cout << "Locul "<<i<< " este: " << Rankings[i] << "!" << endl;
}

void Circuit::ShowWhoDidNotFinish()
{
	for (int i = 1; i <= contor2; i++)
		cout << "Nu a terminat cursa: " << Rankings[i] << "!" << endl;
}
