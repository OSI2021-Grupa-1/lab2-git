#include <iostream>
#include "calc.hpp"

double add(double const a, double const b) {
	return a + b;
}

double divide(double a, double b) {
	if(b == 0)
		std::cout << "You don't divide with zero!";
	else
		return a / b;
}


double multiply(double const a, double const b) {
	return a * b;
}

int main() {
	
}