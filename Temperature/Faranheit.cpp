#include "Faranheit.h"
#include <iostream>


ostream& Faranheit::operator<<(const ostream& rhs) const
{
	rhs << m_temp;
}

Faranheit::operator double() const
{
	return m_temp;
}

Faranheit::Faranheit()
{
}

Faranheit::Faranheit(int temp)
{
	m_temp = temp;
}

Faranheit::~Faranheit()
{
}
