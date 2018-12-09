#include <stdio.h>
#include <stdlib.h>

int main() {

	int luckyNumbers[] = { 4, 8, 15, 16, 23, 42 };

	// In this loop we are going through each index in the array and printing the values.
	int i = 0;
	while (i < 6) {
		printf("%d\n", luckyNumbers[i]);
		i++;
	}

	// For loops are very similiar to while loops.
	// Except that we initialize a varible, set condition, and set increments all together in one parantheis.
	// Below is the for loop version of the while loop above.
	int j;
	for (j = 0; j < 6; j++) {
		printf("%d\n", luckyNumbers[j]);
	}

	system("pause");
	return 0;
}