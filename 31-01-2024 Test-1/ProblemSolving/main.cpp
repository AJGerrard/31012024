#include <iostream>


int main()
{
	// main.cpp/main()
	// ...

	// B)
	int numberB = 10;
	numberB = 9;

	int thingB = 55;
	thingB = 22;

	std::cout << "B) " << numberB << std::endl;

	// ...

	int numberC = 3;
	numberC = 7;
	numberC = 1;

	int somethingC = 23;
	somethingC = 21;

	numberC = somethingC; //numberC = 21;

	std::cout << "C) " << numberC << std::endl;

	int numberD = 1;
	int somethingD = 3;

	numberD = somethingD;

	std::cout << "d) " << somethingD << std::endl;

	int x = 13;
	x = x / 2;
	std::cout << "E) " << x << std::endl;

	float y = 13;

	y = y / 2;
	
	std::cout << "F)" << y << std::endl;

	// Celsius to Fahrenheit

	float degCelsius = 78.0f;
	float degFahrenheit = 172.4f; // Modify this variable below

	std::cout << "Celsius to Fahrenheit)" << std::endl;
	std::cout << "Celsius:    " << degCelsius << std::endl;
	std::cout << "Fahrenheit: " << degFahrenheit << std::endl;


}