#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Problem about write any string, count vowels and constants in this string*/

//it will use in a loop for easy way to count each element in string
#define CONSTANTS "bcdfghjklmnprqstvwxzBCDFGHKLMNPRQSTVWXZ"
#define VOWELS "aeiouyAEIOUY"

void main() {
	int i, j, countVowels = 0, countConstants = 0;
	char userInput[100];
	printf("Please type any text >> ");
	gets_s(userInput);
	printf("\n");
	//First loop for counting CONSTANTS in userInput
	for (i = 0; userInput[i] != '\0'; i++) {
		for (j = 0; j < 39; j++) {
			if (userInput[i] == CONSTANTS[j])
				countConstants++;
		}
	//And a second loop for counting VOWELS in userInput
	}
	for (i = 0; userInput[i] != '\0'; i++) {
		for (j = 0; j < 13; j++) {
			if (userInput[i] == VOWELS[j])
				countVowels++;
		}
	}

	printf("Cons = %d\n", countConstants);
	printf("Vowels = %d\n", countVowels);
	printf("\n");
	system("pause");
}