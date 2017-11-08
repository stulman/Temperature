#include "Celsius.h"

Celsius::Celsius(int temp)
	:m_temp(temp)
{}

double Celsius::F2C(const double frnht) const
{
	return (frnht - 32) * 5 / 9;
}

Celsius::Celsius(const Faranheit & frnht)
{
	m_temp = F2C(frnht);
}

Celsius::operator double() const
{
	return m_temp;
}

ostream& Celsius::operator<<(const ostream& rhs) const
{
	rhs << m_temp;
	return rhs;
}

Celsius::Celsius()
{
}


Celsius::~Celsius()
{
}
