#include <iostream>

int main()
{
	int age = 22;
	std::cout << "I am " << age << " years old!" << std::endl;
	age = age + 1;
	std::cout << "Next year, I'll be " << age << " years old." << std::endl; // Next year, I'll be 23 years old.

	std::cout << "How old are you?" << std::endl;
	std::cin >> age;
	std::cout << "Wow, you're " << age << " years old?" << std::endl;



	int year = 2024;

	std::cout << year << std::endl;

	int time = 100;

	int test = year + time;

	std::cout << "This number is " << test << std::endl;  /*year + time*/ //This number is 2124 (How it will appear in the console)


	float degree = 7;

	std::cout << degree << std::endl;

	float degrees = 3;

	float tester = degree + degrees;

	std::cin >> degrees;

	std::cout << "It is " << tester << " degrees today" << std::endl;

}