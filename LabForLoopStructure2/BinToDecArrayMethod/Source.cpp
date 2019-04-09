/*
	Write a program in C to convert a binary number into a decimal number without using array,function and while loop.
*/

#include <stdio.h>
#include <stdlib.h>

int binToDec(int index);

int userInput[8];

void main() {
	extern int userInput[8];
	int i, result;
	
	printf("Please input your binary number: ");
	for(i = 0;i < 8;i++)
		scanf_s("%d", &userInput[i]);

	printf("\nThe binary Number: ");
	for (i = 0;i < 8;i++)
		printf("%d", userInput[i]);

	for (i = 0; i < 8; i++)
		result = binToDec(i);
	printf("\nThe equivalent Decimal Number: %d", result);


	printf("\n");
	system("pause");
}

int binToDec(int index) {
	extern int userInput[8];
	int i, result = 2, temp;
	static int sum = 0;

	
	if (userInput[index] == 0) { //If there is zero userInput[index]
		return sum += 0;
	} else {
		if (index == 7) //always in Binary system the power equal 1
			return sum += 1;
		for (i = 6; i > index; i--) {

			result = userInput[index] * (result * 2);

		}
		sum += result;
	}

	return sum;
}
