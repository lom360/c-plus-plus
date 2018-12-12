#include <stdio.h>
#include <stdlib.h>

int main() {

	int age = 30;
	int *pAge = &age; // A pointer is just another data type.
	double gpa = 3.4; // What it does is stores the address of a value.
	double *pGpa = &gpa;
	char grade = 'A';
	char *aGrade = &grade;

	printf("age's memory address: %p\n", &age);

	system("pause");
	return 0;
}