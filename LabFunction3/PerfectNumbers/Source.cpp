#include <stdio.h>
#include <stdlib.h>

bool isPerfect(int minNum);

void main() {

	int userMin, userMax;
	int i;

	printf("Please type a min number: ");
	scanf_s("%d", &userMin);

	printf("Please type a max number: ");
	scanf_s("%d", &userMax);

	printf("\nThe perfect numbers between %d to %d are: \n", userMin, userMax);
	for (i = userMin; i < userMax; i++) {
		if (isPerfect(i))
			printf("%d ", i);
	}

	printf("\n");
	system("pause");
}

bool isPerfect(int minNum) {
	int i, sum = 0;

	for (i = 1; i < minNum; i++) {
		if (minNum % i == 0)
			sum += i;
	}

	if (sum == minNum)
		return true;

	return false;
}