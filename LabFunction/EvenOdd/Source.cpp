#include <stdio.h>
#include <stdlib.h>

void functionEvenOdd(int userValue);

void main(){

	int userInput;
	
	printf("Input any number: ");
	scanf_s("%d", &userInput);

	functionEvenOdd(userInput);

	printf("\n");
	system("pause");
}

void functionEvenOdd(int userValue) {
	if(userValue % 2 == 0)
		printf("The entered number is even");
	else
		printf("The entered number is odd");
}