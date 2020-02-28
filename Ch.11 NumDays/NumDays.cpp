#include "NumDays.h"

NumDays::NumDays(int h)
{
	hours = h;
}

void NumDays::setDays(double d)
{
	days = d;
}

void NumDays::setHours(int h)
{
	hours = h;
}

int NumDays::getHours()
{
	return hours;
}

double NumDays::getDays()
{
	return hours / 24;
}

NumDays NumDays::operator+(NumDays b)
{
	int h;
	h = this->getHours() + b.getHours();
	this->setHours(h);

	return *this;
}

NumDays NumDays::operator-(NumDays b)
{
	int h;
	h = this->getHours() - b.getHours();
	this->setHours(h);

	return *this;
}

NumDays NumDays::operator++()
{
	this->setHours(hours + 1);
	return *this;
}

NumDays NumDays::operator--()
{
	this->setHours(hours - 1);
	return *this;
}
