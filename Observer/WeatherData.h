#pragma once
#include"iSubject.h"
#include<set>
using namespace std;
class WeatherData : public iSubject
{
	set<iObserver*>observers;
	double temperature;
	double humidity;
	double pressure;
public:
	WeatherData();
	~WeatherData();
	int getTemperature();
	int getHumidity();
	int getPressure();
	void setMeasurements(double temperature, double humidity, double pressure);
	void measurementsChanged();
	virtual void registerObserver(iObserver* o);
	virtual void removeObserver(iObserver* o);
	virtual void notifyObservers();
};

