#include "Celsius.h"
#include "Faranheit.h"
#include <string>
#include <iostream>

void prettyPrint(const String& msg, int temp)
{
	cout << msg << Celsius(temp) << " Celsius and " << Faranheit(temp) << " Farenheit\n";
}

int main()
{
	prettyPrint("The freezing point of water is: ", 0);
	prettyPrint("The boiling point of water is: ", 100);
	prettyPrint("The absolute freezing point is: ", -273)
	return 0;
}