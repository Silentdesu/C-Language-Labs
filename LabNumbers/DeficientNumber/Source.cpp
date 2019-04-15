#include <stdio.h>
#include <stdlib.h>

bool isDeficient(int number);

void main() {

	int userNumber;

	printf("Input an integer number: ");
	scanf_s("%d", &userNumber);

	if (isDeficient(userNumber))
		printf("%d is Deficient number", userNumber);
	else 
		printf("%d is not Deficient number", userNumber);

	printf("\n");
	system("pause");
}

bool isDeficient(int number) {

	int i, sum = 0;

	for (i = 1;i <= number;i++) 
		if (number % i == 0)
			sum += i;

	if (sum < number * 2)
		return true;

	return false;
}