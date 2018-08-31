#pragma once
class iObserver
{
public:
	virtual void update(double temperature, double humidity, double pressure) = 0;
	virtual ~iObserver() = 0;
};
