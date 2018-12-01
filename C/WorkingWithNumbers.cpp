#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

	// Any operation that deals with an integer and floating point number
	// will give us a floating point number back.
	printf("%f\n", 5 + 4.5);

	// 5/4 is 1.25 but when dealing with "only" integer numbers.
	// Then the output will be an integer which is why only '1' gets printed.
	printf("%d\n", 5 / 4);


	// Below will allow us to get the full value.
	printf("%f\n", 5 / 4.0);

	// Declaring a variable and printing.
	int num = 6;
	printf("%d\n", num);
	
	// The pow() function is pulled from the math.h library.
	// This function with raise a number to a certain power.
	// For example, pow(2, 3) ---> 2^3
	printf("%f\n", pow(2, 3));
	printf("%f\n", pow(4, 3));

	// sqrt() finds the square root of a number.
	printf("%f\n", sqrt(36));

	// ceil() rounds a number up.
	printf("%f\n", ceil(36.356));

	// floor() rounds a number down.
	printf("%f\n", floor(36.3356));

	/*
	 * There are plenty more of math functions.
	 * They can easily be googled to learn more.
	 */

	system("pause");
	return 0;
}