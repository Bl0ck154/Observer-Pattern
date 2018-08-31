#pragma once
#include "Header.h"
#include "iDisplayEl.h"
#include "iSubject.h"

class CurrentConditionsDisplay :
	public iObserver, public iDisplayEl
{
	double temperature;
	double humidity;
	double pressure;
	iSubject *weatherData;
public:
	CurrentConditionsDisplay(iSubject *weatherData);
	virtual void display();
	virtual void update(double temperature, double humidity, double pressure);
	~CurrentConditionsDisplay();
};

