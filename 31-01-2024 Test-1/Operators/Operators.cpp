int first = 0;

std::count << "Enter the first number: " << std::endl;

std::cin >> first;

if (std::cin.fail()) {
	std::cout << "You didn't enter an integer. ";
	std::cout << "We'll just use '5' instead." << std::endl;
	first = 5;
	std::cin.clear();
	std::cin.ignore(std::cin.rdbuf()->in_avail());
}