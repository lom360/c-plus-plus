#include <stdio.h>
#include <stdlib.h>

int main() {

	printf("Hello\"World\n"); // The backslash is a way to ignore quotes so it can print out into the console.
	printf("My favorite %s is %d\n", "number", 500); // %d is an example called "format specifier".
													 // If you have multiple "format specifier" then
													 // use a comma to seperate.

	system("pause");
	return 0;
}