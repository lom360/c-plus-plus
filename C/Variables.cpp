#include <stdio.h>
#include <stdlib.h>

int main() {
	/*
	 * In this lesson we created a short story to practice variables.
	 * They are important because when it comes to repeated values
	 * we can control it with one variable. Thus granting us the ability
	 * to change all repeated values by updating the variable that is being
	 * used as the placeholder/container.
	 */

	char characterName[] = "Tom";
	int characterAge = 67;
	printf("There once was a man named %s \n", characterName); // %s is a placeholder for string of characters.
	printf("he was %d years old.\n", characterAge); // %d is a placeholder for integers.

	characterAge = 30; // Half way through the story we changed the value.
	printf("He really liked the name %s\n", characterName);
	printf("but did not like being %d.\n", characterAge);

	system("pause");
	return 0;
}