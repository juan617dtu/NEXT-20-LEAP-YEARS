#define ANSI_COLOR_RED "\x1b[31m"
#define ANSI_COLOR_RESET "\x1b[0m"
#define ANSI_COLOR_GREEN "\x1b[32m"
#include <iostream>
#include <limits>
int main() {
	int year, i = 0, j = 1;
	std::cout << ANSI_COLOR_RED;
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << "~\t\t\tLEAP YEAR TEST\t\t\t~" << std::endl;
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl << std::endl;
	std::cout << ANSI_COLOR_RESET;
	std::cout << "ENTER YEAR: ";
	std::cin >> year;
	while (std::cin.fail()) {
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "\nBad entry. Enter a YEAR: ";
		std::cin >> year;
	}
	if (year % 400 == 0) std::cout << year << " is a leap year.";
	else if (year % 100 == 0) std::cout << year << " is not a leap year.";
	else if (year % 4 == 0) std::cout << year << " is a leap year.";
	else { std::cout << year << " is not a leap year."; }
	std::cout << std::endl << std::endl << "\nNEXT 20 LEAP YEARS FROM INPUT YEAR: ";
	while (i < 20) {
		if ((year + j) % 400 == 0 || (year + j) % 4 == 0) {
			if (i == 0) std::cout << "\t" << year + j << std::endl;
			else { std::cout << "\t\t\t\t\t" << year + j << std::endl; }
			i++;
		}
		j++;
	}
	std::cout << ANSI_COLOR_GREEN << "\n\n" << std::endl;
	return 0;
}
