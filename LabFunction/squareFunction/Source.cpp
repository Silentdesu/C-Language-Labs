#include <stdio.h>
#include <stdlib.h>

double squareFunction(int userValue);

void main(){

	int userInput;
	
	printf("Input any number for square: ");
	scanf_s("%d", &userInput);

	printf("\nTotal square of 20 is: %.2lf", squareFunction(userInput));

	printf("\n");
	system("pause");
}

double squareFunction(int userValue) {
	return (double)userValue * userValue;
}