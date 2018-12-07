#include <stdio.h>
#include <stdlib.h>

int main() {

	double num1;
	double num2;
	char op; // Operator

	printf("Enter a number: ");
	scanf("%lf", &num1);
	printf("Enter operator: ");
	scanf(" %c", &op); // There is a space in front of %c because when the enter command
					   // then %c will register when we don't want it. The space will prevent that.
	printf("Enter a number: ");
	scanf("%lf", &num2);

	if (op == '+') {
		printf("%f\n", num1 + num2);
	}
	else if (op == '-') {
		printf("%f\n", num1 - num2);
	}	
	else if (op == '*') {
		printf("%f\n", num1 * num2);
	}	
	else if (op == '/') {
		printf("%f\n", num1 / num2);
	}
	else {
		printf("Invalid operator\n");
	}

	system("pause");
	return 0;
}