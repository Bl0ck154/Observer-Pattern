#include"Header.h"
#include"WeatherData.h"
#include"CurrentConditionsDisplay.h"
void main()
{
	WeatherData weatherData;
	CurrentConditionsDisplay currentConditionsDisplay(&weatherData);

	weatherData.setMeasurements(15, 90, 29.3);
	weatherData.setMeasurements(12, 80, 31.1);
	weatherData.removeObserver(&currentConditionsDisplay);
	weatherData.setMeasurements(13, 70, 30.8);
}