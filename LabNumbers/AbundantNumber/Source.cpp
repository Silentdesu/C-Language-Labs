/*
	Write a program in C to check whether a given number is Abundant or not.
*/

#include <stdio.h>
#include <stdlib.h>

bool isAbundant(int number);

void main() {
	int userNumber;

	printf("Input an integer number: ");
	scanf_s("%d", &userNumber);

	if (isAbundant(userNumber))
		printf("%d is Abundant number", userNumber);
	else
		printf("%d is not Abundant number", userNumber);



	printf("\n");
	system("pause");
}

bool isAbundant(int number) {

	int i, sum = 0, result;

	for (i = 1;i < number;i++)
		if (number % i == 0)
			sum += i;

	if (sum > number)
		return true;

	return false;
}
