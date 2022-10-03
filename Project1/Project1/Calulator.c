#include<stdio.h>
#include "Calculator.h"

double addition(double additive1, double additive2) {
	return (additive1 + additive2);
}
double subtraction(double minuend, double sutrahend) {
	return (minuend - sutrahend);
}
double multiplication(double multiplier1, double multiplier2) {
	return (multiplier1 * multiplier2);
}
double division(double divident, double divisor) {
	return (divident / divisor);
}
double expondation(double base, int exponent) {
	double result = 1;
	for (int i = 0; i <= exponent; i++)
	{
		result *= base;
	}return result;
}
