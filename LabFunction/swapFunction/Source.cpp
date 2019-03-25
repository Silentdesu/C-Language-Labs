#include <stdio.h>
#include <stdlib.h>

void swapFunction(int fistValue, int secondValue);

void main(){

	int firstNumber, secondNumber;

	printf("Input 1st number: ");
	scanf_s("%d", &firstNumber);
	printf("Input 2nd number: ");
	scanf_s("%d", &secondNumber);

	printf("Before swapping firstNumber = %d, secondNumber = %d\n", firstNumber, secondNumber);
	swapFunction(firstNumber, secondNumber);

	printf("\n");
	system("pause");
}

void swapFunction(int firstValue, int secondValue){
	int temp;
	
	temp = firstValue;
	firstValue = secondValue;
	secondValue = temp;

	printf("After swapping firstValue = %d, secondValue = %d\n", firstValue, secondValue);
}