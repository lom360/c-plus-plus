#include <stdio.h>
#include <stdlib.h>

int main() {

	// Created a 2D array.
	int nums[3][2] = {
		{1, 2},
		{3, 4},
		{5, 6}
	};

	// Used a nested for loop to print out the 2D array.
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			printf("%d, ", nums[i][j]);
		}
		printf("\n");
	}

	system("pause");
	return 0;
}