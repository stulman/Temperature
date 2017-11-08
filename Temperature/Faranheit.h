#pragma once
#include <iostream>

class Faranheit
{
	double m_temp;
public:
	ostream& operator<<(const ostream&) const;
	operator double() const;
	Faranheit(int);
	Faranheit();
	~Faranheit();
};

