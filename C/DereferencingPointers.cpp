#include <stdio.h>
#include <stdlib.h>

int main() {

	// Dereferencing pointers means we are going to the address of the pointer 
	// and retrieving or modifying the data stored on that adress.
	int age = 30;
	int *pAge = &age;


	printf("%d\n", pAge);
	printf("%d\n", *&age); // This is an exammple of dereferencing.
	printf("%d\n", &*&age); // As you can see we can dereference multiple of times.
	printf("%d\n", *&*&age);

	system("pause");
	return 0;
}