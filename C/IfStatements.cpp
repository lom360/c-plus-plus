#include <stdio.h>
#include <stdlib.h>

int max(int num1, int num2, int num3) { // This function will check which integers that passes is the highest.
	int result;
	// Below are if-else statements
	if (num1 >= num2 && num1 >= num3) { // Inside the parathesis is a condion.
		return num1;					// If conditions are true then code 
	}									// inside the curly braces executes.
	else if (num2 >= num1 && num2 >= num3) {// and(&&) or(||) are ways to check multiple conditions
		result = num2;					// Order of condition does matter.
	}
	else { // else statements doesn't require a condtion to check.
		result = num3;
	}
	return result;
}

int main() {

	printf("%d\n", max(4, 10, -60)); // 10 > 4 and 10 > -60 so 10 should print out.

	system("pause");
	return 0;
}