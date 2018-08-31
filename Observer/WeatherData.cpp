#include "WeatherData.h"



WeatherData::WeatherData()
{
}


WeatherData::~WeatherData()
{
}

int WeatherData::getTemperature()
{
	return temperature;
}

int WeatherData::getHumidity()
{
	return humidity;
}

int WeatherData::getPressure()
{
	return pressure;
}

void WeatherData::setMeasurements(double temperature, double humidity, double pressure)
{
	this->temperature = temperature;
	this->humidity = humidity;
	this->pressure = pressure;
	measurementsChanged();
}

void WeatherData::measurementsChanged()
{
	notifyObservers();
}

void WeatherData::registerObserver(iObserver* o)
{
	observers.insert(o);
}

void WeatherData::removeObserver(iObserver* o)
{
	observers.erase(o);
}

void WeatherData::notifyObservers()
{
	for each (iObserver* var in observers)
	{
		var->update(temperature, humidity, pressure);
	}
}
