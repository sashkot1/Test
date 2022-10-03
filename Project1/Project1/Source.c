#include <stdio.h>
#include "Calculator.h"

void menu() {
	char com;
	printf("Welcome!");
	double num1, num2;
	do {
		printf("Please input number!");
		scanf("%lf", &num1);
		printf("Press + to add, press - to subtract, press * to multiply, press / to divide, press ^ to power, press x to exit ");
		scanf("%c", &com);
		printf("Please input number!");
		scanf("%lf", &num2);

	} while (com != 'x')
}

int main() {

}