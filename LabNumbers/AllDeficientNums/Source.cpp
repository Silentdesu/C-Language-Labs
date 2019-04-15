/*
	Write a program in C to check whether a given number is Deficient or not.
*/

#include <stdio.h>
#include <stdlib.h>

bool isDeficient(int number);

void main() {

	for (int i = 1;i <= 100;i++)
		if (isDeficient(i))
			printf("%d ", i);

	printf("\n");
	system("pause");
}

bool isDeficient(int number) {

	int i, sum = 0;

	for (i = 1;i <= number;i++) 
		if (number % i == 0)
			sum += i;
	number *= 2;

	if (sum < number)
		return true;

	return false;
}
