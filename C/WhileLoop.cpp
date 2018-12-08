#include <stdio.h>
#include <stdlib.h>

int main() {

	int index = 1;
	while (index <= 5) {// As long as the condition in the paranthesis is true the code within the braces will execute.
		printf("%d\n", index);
		index++;// This is the same as index = index + 1.
	}

	do { // The different between a while loop and do while loop is a while loop will check condition first and do while loop will execute the code once before checking.
		printf("%d\n", index);
		index--;
	} while (index >= 1); // Also be very careful of infinite loop.

	system("pause");
	return 0;
}