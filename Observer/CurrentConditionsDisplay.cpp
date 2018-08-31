#include "CurrentConditionsDisplay.h"


CurrentConditionsDisplay::CurrentConditionsDisplay(iSubject * weatherData)
{
	this->weatherData = weatherData;
	weatherData->registerObserver(this);
}

void CurrentConditionsDisplay::display()
{
	cout << "Current conditions: " << temperature << " " << humidity << " " << pressure << endl;
}

void CurrentConditionsDisplay::update(double temperature, double humidity, double pressure)
{
	this->temperature = temperature;
	this->humidity = humidity;
	this->pressure = pressure;
	display();
}

CurrentConditionsDisplay::~CurrentConditionsDisplay()
{
}
