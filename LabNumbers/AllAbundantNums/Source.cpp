/*
	Write a program in C to find the Abundant numbers (integers) between 1 to 1000.
*/

#include <stdio.h>
#include <stdlib.h>

bool isAbundant(int number);

void main() {

	for (int i = 1;i <= 1000;i++) 
		if (isAbundant(i) == true)
			printf("%d ", i);

	printf("\n");
	system("pause");
}

bool isAbundant(int number) {

	int i, result, sum = 0;

	for (i = 1;i < number;i++)
		if (number % i == 0)
			sum += i;

	if (sum > number)
		return true;

	return false;
	
}
