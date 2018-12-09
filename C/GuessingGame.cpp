#include <stdio.h>
#include <stdlib.h>

int main() {

	int secretNumber = 5;
	int guess = 0;
	int guessCount = 0;
	int guessLimit = 3;
	bool outOfGuesses = false;

	// If user's guess equals to secretNumber and outOfGuesses remains false then code will execute. 
	while (guess != secretNumber && outOfGuesses == 0) {
		if (guessCount < guessLimit) { // Guess limit is 3. Guess count will start at 0.
			printf("Enter a number: ");
			scanf("%d", &guess);
			guessCount++; // Will increment towards guess limit.
		}
		else { // When guess limit is reached then we will change outOfGuesses to true.
			outOfGuesses = true;
		}

	}

	if (outOfGuesses == 1) {
		printf("Out of guesses loser!!!");
	}
	else {
		printf("You win!!!");
	}

	system("pause");
	return 0;
}