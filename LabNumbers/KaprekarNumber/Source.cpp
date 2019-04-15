/*
	Write a program in C to check whether a given number is an Kaprekar number or not.
*/

#include <stdio.h>
#include <stdlib.h>

bool isKaprekar(int number);

void main() {
	int userNumber;

	printf("Input an integer number: ");
	scanf_s("%d", &userNumber);

	if (isKaprekar(userNumber))
		printf("%d is Kaprekar number", userNumber);
	else
		printf("%d is not Kaprekar number", userNumber);

	printf("\n");
	system("pause");
}

bool isKaprekar(int number) {

	if (number == 1)
		return true;

	int temp, remainder, count = 0,sum;
	int i, x = 1;

	temp = remainder = number * number;

	while (temp != 0) {
		temp /= 10;
		count++;
	}

	temp = remainder;

	
	for (i = 0; i < count; i++) {

		x *= 10;
		sum = temp / x + remainder % x;

		if (x != number)
			if (sum == number)
				return true;
	}
	

	return false;
}