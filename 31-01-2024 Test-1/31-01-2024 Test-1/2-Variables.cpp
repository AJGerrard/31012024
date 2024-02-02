#include <iostream>

int main()
{
    int age = 22;

	std::cout << "I am " << age << " years old!" << std::endl;
	age = age + 1;
	std::cout << "Next year, I'll be " << age << " years old." << std::endl;

	std::cout << "How old are you?" << std::endl;
	std::cin >> age;
	std::cout << "Wow, you're " << age << " years old?";