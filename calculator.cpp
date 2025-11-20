#include "calculator.h"
#include <cmath>
#include <stdexcept>

double Calculator::power(double base, double exponent) {
	return std::pow(base, exponent);
}

double Calculator::squareRoot(double value) {
	if (value < 0) throw std::invalid_argument("Negative number");
	return std::sqrt(value);
}

int Calculator::factorial(int n) {
	if (n < 0) throw std::invalid_argument("Negative factorial");
	if (n <= 1) return 1;
	return n * factorial(n - 1);
}

double Calculator::add(double a, double b) {
	 return a + b;
}
double Calculator::subtract(double a, double b) {
	return a - b;
}
double Calculator::multiply(double a, double b) {
	return a * b;
}
double Calculator::divide(double a, double b) {
	if (b == 0) {
		throw "Division by zero error";
	}
	return a / b;
}
