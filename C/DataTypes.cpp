#include <stdio.h>
#include <stdlib.h>

int main() {

	// int, double, char are the most basic "data types" we will use in C.

	int age = 40; // int stores integer values.
	double gpa = 3.7; // double stores numbers with decimal place values.
	char grade = 'A'; // char stores single character values.
	// Below is an example to store strings or an array of characters.
	// The difference is adding [] after the variable name.
	char phrase[] = "Giraffe Academy";

	printf("%d\n", age);
	printf("%f\n", gpa);
	printf("%c\n", grade);
	printf("%s\n", phrase);

	system("pause");
	return 0;
}