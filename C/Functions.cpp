#include <stdio.h>
#include <stdlib.h>

void sayHi(char name[], int age); // We can pass data into the functions call parameters.

int main() { // The main() is technically a functinon.

	printf("Top\n"); // The following statements we will show we can print from a function.
	sayHi("Andy", 40); // This statement calls the functions sayHi().
	sayHi("Bob", 25);  // The function will output/print a different value
	sayHi("Derik", 70); // because we are passing in different inputs for the parameters.

	system("pause");
	return 0;
}

void sayHi(char name[], int age) { // When function is called it will jump to the function.
	printf("Hello %s, you are %d years old.\n", name, age);
}