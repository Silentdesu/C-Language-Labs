#include <stdio.h>
#include <stdlib.h>

bool isArmstrong(int number);
bool isPerfect(int number);

void main() {

	int userInput;

	printf("Input any number: ");
	scanf_s("%d", &userInput);

	if (isArmstrong(userInput))
		printf("\n%d is Armstrong number\n", userInput);
	else
		printf("\n%d is not Armstrong number\n", userInput);

	if (isPerfect(userInput))
		printf("%d is Perfect number\n", userInput);
	else
		printf("%d is not Perfect number\n", userInput);

	printf("\n");
	system("pause");
}

bool isArmstrong(int number) {
	int i, count = 0, x, sum = 0, temp = number, remainder;
	
	while (temp != 0) {
		temp /= 10;
		count++;
	}
	temp = number;

	for (i = 1; i <= count; i++) {
		remainder = temp % 10;
		temp /= 10;
		x = 1;
		for (int j = 1; j <= count; j++)
			x = x * remainder;
		sum += x;
	}

	if (sum == number)
		return true;

	return false;
}

bool isPerfect(int number) {
	int i, sum = 0;

	for (i = 1; i < number; i++) {
		if (number % i == 0)
			sum += i;
	}

	if (sum == number)
		return true;

	return false;
}

