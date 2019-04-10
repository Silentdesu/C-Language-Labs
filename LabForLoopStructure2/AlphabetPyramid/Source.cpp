/*
	Write C program to display the pattern like pyramid using the alphabet
*/

#include <stdio.h>
#include <stdlib.h>

#define ALPHABET "ABCDEFGHIJKLMNOPQRSTUVWXYZ"

void pyramid(int number);

void main() {
	int userNum;
	
	printf("Please write a number for lines of pyramid: ");
	scanf_s("%d", &userNum);

	pyramid(userNum);

	printf("\n");
	system("pause");
}

void pyramid(int number) {
	int i, j, k, x = 1;

	for (i = number; i > 0; i--) { //Start of our pyramid

		for (j = i - 1; j > 0; j--) //Make a spaces
			printf(" ");

		for (k = 0; k < x; k++) //Starts with A
			printf("%c", ALPHABET[k]);

		for (k = x - 1; k > 0; k--) //Ends with A
			printf("%c", ALPHABET[k - 1]);

		printf("\n");
		x++;
	}
}
