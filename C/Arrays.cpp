#include <stdio.h>
#include <stdlib.h>

int main() {

	// A variable is a container that stores a single value.
	// An array is a container that will allow you to store more than one value.

	// The first index starts at 0.
	int luckyNumbers[] = {4, 8, 15, 16, 23, 42};
	printf("%d\n", luckyNumbers[0]);
	printf("%d\n", luckyNumbers[1]);
	printf("%d\n", luckyNumbers[3]);

	
	luckyNumbers[3] = 200; // You can change the value in an index.
	printf("%d\n", luckyNumbers[3]);

	// Here we set the size of the array.
	// We can definitely use other types when creating an array other than int.
	double newNumbers[10];
	newNumbers[0] = 80;
	newNumbers[1] = 90;
	printf("%f\n", newNumbers[0]);
	printf("%f\n", newNumbers[1]);

	char phrase[] = "Giraffe Academy";

	system("pause");
	return 0;
}