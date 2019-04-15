/*
	Write a program in C to check whether a given number is an ugly number or not.
*/

#include <stdio.h>
#include <stdlib.h>

bool isUgly(int number);
int numberDivide(int fNumber, int sNumber);

void main() {

	int userNumber;

	printf("Input an integer number: ");
	scanf_s("%d", &userNumber);

	if (isUgly(userNumber))
		printf("%d it is an ungly number", userNumber);
	else
		printf("%d it is not an ugly number", userNumber);
	
	printf("\n");
	system("pause");
}

bool isUgly(int number) {

	while ((number % 2 == 0) || (number % 3 == 0) || (number % 5 == 0)) {
		if (number % 2 == 0)
			number /= 2;
		if (number % 3 == 0)
			number /= 3;
		if (number % 5 == 0)
			number /=5;
}

	return (number == 1) ? true : false;
}

	
