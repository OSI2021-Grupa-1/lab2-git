#include <iostream>
#include "calc.hpp"

double add(double const a, double const b) {
	return a + b;
}

double divide(double a, double b) {
	if (b == 0)
		std::cout << "You don't divide with zero!";
	else
		return a / b;
}

double multiply(double const a, double const b) {
	return a * b;
}


double subtract(double const a, double const b)
{
	return a - b;
}

int main() {
	std::cout << "Kalkulator:" << std::endl;
	double a, b;
	std::cout << "Operandi: ";
	std::cin >> a >> b;
	
	std::cout << "Operacija: \n";
	std::cout << "1. Sabiranje \n";
	std::cout << "2. Oduzimaje \n";
	std::cout << "3. Mnozenje \n";
	std::cout << "4. Dijeljenje \n";

	int opcija;
	do
	{
	std::cin >> opcija;
	} while (opcija <= 0 || opcija > 4);

	switch (opcija)
	{
	case 1:
		std::cout << add(a, b);
		break;
	case 2:
		std::cout << subtract(a, b) << std::endl;
		break;
	case 3:
		std::cout << multiply(a, b);
		break;
	case 4:
		std::cout << divide(a, b);
		break;
	default:
		break;
	}
}

