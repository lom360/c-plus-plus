#include <stdio.h>
#include <stdlib.h>

int main() {

	// The three most common file modes: r, w, a.
	// Which stands for read, write and append respectively.
	FILE *fpointer = fopen("emplyees.txt", "w"); // Write will write to files but will also override anything in the file.

	fprintf(fpointer, "Jim, Salesman\nPam, Receptionist\nOscar, Accounting");

	fclose(fpointer);	
	
	fopen("emplyees.txt", "a"); // Apend will allow you to write to files without overriding anything.

	fprintf(fpointer, "\nKelly, Customer Service");

	fclose(fpointer);

	//system("pause");
	return 0;
}