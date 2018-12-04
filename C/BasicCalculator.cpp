#include <stdio.h>
#include <stdlib.h>

int main() {

	double num1;
	double num2;

	printf("Enter first number: ");
	scanf("%lf", &num1); // Ampersand symbol means we are accessing the address of num1.

	printf("Enter second number: ");
	scanf("%lf", &num2);

	// scanf a double requires %lf. Whereas printf a double only needs %f.
	printf("Answer: %f\n", num1 + num2);

	system("pause");
	return 0;
}