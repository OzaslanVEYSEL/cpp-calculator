#include <iostream>
#include "calculator.h"
int main() {
	Calculator calc;
	std::cout << "Simple Calculator Project" << std::endl;
	std::cout << "5 + 3 = " << calc.add(5, 3) << std::endl;
	std::cout << "Power: 2^3 = " << calc.power(2, 3) << std::endl;
	std::cout << "Square Root: sqrt(16) = " << calc.squareRoot(16) << std::endl;
	std::cout << "Factorial: 5! = " << calc.factorial(5) << std::endl;

	return 0;
}
