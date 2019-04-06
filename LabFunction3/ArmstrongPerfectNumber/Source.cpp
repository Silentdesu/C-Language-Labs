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
	int sum = 0, powerCube, dividedAns, count = 0;
	int numDiv = 100, originNum = number;

	while (count < 3) {
		dividedAns = originNum / numDiv;
		originNum %= numDiv;
		numDiv /= 10;
		sum += dividedAns * dividedAns * dividedAns;
		count++;
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