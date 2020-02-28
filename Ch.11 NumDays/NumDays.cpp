#include "NumDays.h"

NumDays::NumDays(int h)
{
	hours = h;
	days = static_cast<double>(h) / 24;
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
	return static_cast<double>(hours) / 24;
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

void NumDays::operator++()
{
	this->setHours(hours + 1);
}

void NumDays::operator++(int)
{
	this->setHours(hours + 1);
}

void NumDays::operator--()
{
	this->setHours(hours - 1);
}

void NumDays::operator--(int)
{
	this->setHours(hours - 1);
}
