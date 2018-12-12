#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int age = 30;
	double gpa = 3.4;
	char grade = 'A';

	printf("age: %p\ngpa: %p\ngrade: %p\n", &age, &gpa, &grade); // %p means pointer. Used for accessing address.

	system("pause");
	return 0;
}