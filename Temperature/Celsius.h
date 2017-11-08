#pragma once
#include "Faranheit.h"

class Celsius
{
	double m_temp;
public:
	operator double() const;
	Celsius(const Faranheit &);
	double F2C(const double) const;
	Celsius(int);
	Celsius();
	~Celsius();
};

