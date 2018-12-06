#include <stdio.h>
#include <stdlib.h>


// We define a function by a type
// That will determine what value we will output.
// Since cube() is defined by a double. It must
// output a double. In the previous subject we
// went over void. A function defined by a void
// does not output anything.
double cube(double num); // This line is called prototyping.
						 // Whice allows us to create functions after main().

int main() {

	// We are calling cube() in the printf function.
	// We have also placed an input for our function.
	printf("Answer: %f\n", cube(3.0));
	printf("Answer: %f\n", cube(5.0));
	printf("Answer: %f\n", cube(7.0));

	system("pause");
	return 0;
}

double cube(double num) {
	double result = num * num * num;
	return result;
	printf("Here"); // This line of code will never execute.
					// Because the return statement will break
					// out of the function.
}