#pragma once
#include "Faranheit.h"
#include <iostream>

class Celsius
{
	double m_temp;
public:
	operator double() const;
	ostream& operator<<(const ostream&) const;
	Celsius(const Faranheit &);
	double F2C(const double) const;
	Celsius(int);
	Celsius();
	~Celsius();
};

