/*
	Write a program in C to find the Abundant numbers (integers) between 1 to 10000.
*/

#include <stdio.h>
#include <stdlib.h>

bool isKaprekar(int number);

void main() {
	int userNumber;

	
	for (int i = 1; i <= 10000; i++) 
		if (isKaprekar(i))
			printf("%d ", i);


	printf("\n");
	system("pause");
}

bool isKaprekar(int number) {

	if (number == 1)
		return true;

	int temp, remainder, count = 0, sum;
	int i;

	temp = remainder = number * number;

	while (temp != 0) {
		temp /= 10;
		count++;
	}

	temp = remainder;

	int x = 1;
	for (i = 0; i < count; i++) {
		x *= 10;
		sum = temp / x + remainder % x;

		if (x != number)
			if (sum == number)
				return true;
	}


	return false;
}