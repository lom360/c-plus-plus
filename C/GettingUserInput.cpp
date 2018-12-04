#include <stdio.h>
#include <stdlib.h>

int main() {

	// Example for string of characters using fgets instead of scanf
	char fullName[20];
	printf("Please enter your full name: ");
	fgets(fullName, 20, stdin); // Note that any leading scanf can prevent fgets() to perform as intended.
	printf("Your name is %s This line is to show you what affects fgets can have on your code.\n", fullName);

	int age;
	printf("Enter your age: ");
	scanf("%d", &age); // Ampersand sign is needed in order to accept user input.
					   // It is related to pointers which we will go over in
	                   // Futer lessons.
	printf("You are %d years old.\n", age);

	// You can also use scanf for double types.
	double gpa;
	printf("Enter your gpa: ");
	scanf("%lf", &gpa);
	printf("Your gpa is %f.\n", gpa);

	// Example for char types
	char grade;
	printf("Enter your grade: ");
	scanf(" %c", &grade); // The space in front of the format specifier is important for char types.
	printf("Your grade is %c.\n", grade);

	// Example for string of characters.
	char name[20]; // For strings we have to specify how big the string can be.
	printf("Enter your name: ");
	scanf("%s", name);
	printf("Your name is %s.\n", name);

	system("pause");
	return 0;
}