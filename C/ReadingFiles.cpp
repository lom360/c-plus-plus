#include <stdio.h>
#include <stdlib.h>

int main() {

	char line[255];
	FILE *fpointer = fopen("employees.txt", "r");

	fgets(line, 255, fpointer); // This will store the first line in file.
	fgets(line, 255, fpointer); // The second one will store the second line in file.
	printf("%s", line);

	fclose(fpointer);

	system("pause");
	return 0;
}