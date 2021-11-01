#include <iostream>
#include "calc.hpp"

double add(double const a, double const b) {
	return a + b;
}

double multiply(double const a, double const b) {
	return a * b;
}


double subtrac(double const a, double const b)
{
	return a - b;
}

int main() {
	bool running = true;
	std::cout << "Kalkulator:" << std::endl;
	while (running) {
		double a, b;
		std::cout << "Operatori: ";
		std::cin >> a >> b;

		std::cout << "Operacija: \n";
		std::cout << "1. Sabiranje \n";
		std::cout << "2. Oduzimaje \n";
		std::cout << "3. Mnozenje \n";
		std::cout << "4. Dijeljenje \n";
		std::cout << "4. Dijeljenje \n";
		int opcija;
		std::cin >> opcija;
		switch (opcija)
		{
		case 1: 
			std::cout << add(a, b);
			break;
		case 2:
			std::cout << subtract(a, b);
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
	
}