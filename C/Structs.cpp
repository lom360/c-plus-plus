#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// A struct or structor is a data structure to store multiple types of data.
// Stucts are used to model after real world entities.
struct Student {
	char name[50];
	char major[50];
	int age;
	double gpa;
};

int main() {

	// With our defined structure called Student.
	// We will create student1, which will have all
	// the data type we've used to define the structure Student.
	struct Student student1;
	student1.age = 22;
	student1.gpa = 3.2;
	strcpy(student1.name, "Jim");      // When assigning a string we have to use the strcpy function.
	strcpy(student1.major, "Business");// Which is in the string.h library.

	printf("%f\n", student1.gpa);
	printf("%d\n", student1.age);
	printf("%s\n", student1.name);
	printf("%s\n", student1.major);

	struct Student student2; // So as you can see that we can create more objects with the struct we defined.
	student2.age = 20;
	student2.gpa = 2.5;
	strcpy(student2.name, "Pam");
	strcpy(student2.major, "Art");

	printf("%f\n", student2.gpa);
	printf("%d\n", student2.age);
	printf("%s\n", student2.name);
	printf("%s\n", student2.major);

	system("pause");
	return 0;
}