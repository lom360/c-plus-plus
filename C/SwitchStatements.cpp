#include <stdio.h>
#include <stdlib.h>

int main() {

	char grade = 'A';

	// Switch statement and if statements are very similar.
	// The can do the same thing, but switch statem is used
	// more for checking "one single" value against many other values.
	switch (grade) {
		case 'A' :
			printf("You did great!\n");
			break;
		case 'B' :
			printf("You did alright!\n");
			break;
		case 'C' :
			printf("You did poorly!\n");
			break;
		case 'D' :
			printf("You did very bad!\n");
			break;
		case 'F' :
			printf("You done failed!\n");
			break;
		default :
			printf("You got an invalid grade.");
	}

	system("pause");
	return 0;
}