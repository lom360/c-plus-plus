#include <stdio.h>
#include <stdlib.h>

int main() {

	// A constant variable means it has a value that cannot be changed.
	// That is why we see that there is an error on line 10.
	// It is good practice to name constant with all caps.
	const int NUM = 5;
	printf("%d\n", NUM);
	NUM = 8;
	printf("%d\n", NUM);

	system("pause");
	return 0;
}