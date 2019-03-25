#include <stdio.h>
#include <stdlib.h>

void largeFunction(int firstValue, int secondValue, int thirdValue);
void smallFunction(int firstValue, int secondValue, int thirdValue);

void main() {

	int fNumber, sNumber, tNumber;

	printf("Write 1st number: ");
	scanf_s("%d", &fNumber);
	printf("Write 2nd number: ");
	scanf_s("%d", &sNumber);
	printf("Write 3rd number: ");
	scanf_s("%d", &tNumber);
	printf("\n");

	printf("Large function: ");
	largeFunction(fNumber, sNumber, tNumber);
	printf("\n");
	printf("Small function: ");
	smallFunction(fNumber, sNumber, tNumber);

	printf("\n");
	system("pause");
}

void largeFunction(int firstValue, int secondValue, int thirdValue) {
	if (firstValue > secondValue && secondValue > thirdValue && firstValue > thirdValue)
		printf("%d %d %d", firstValue, secondValue, thirdValue);
	if (firstValue > secondValue && thirdValue > secondValue && firstValue > thirdValue)
		printf("%d %d %d", firstValue, thirdValue, secondValue);
	if (secondValue > firstValue && firstValue > thirdValue && secondValue > thirdValue)
		printf("%d %d %d", secondValue, firstValue, thirdValue);
	if (secondValue > firstValue && thirdValue > firstValue && secondValue > thirdValue)
		printf("%d %d %d", secondValue, thirdValue, firstValue);
	if (thirdValue > firstValue && secondValue > firstValue && thirdValue > secondValue)
		printf("%d %d %d", thirdValue, secondValue, firstValue);
	if (thirdValue > firstValue && firstValue > secondValue && thirdValue > secondValue)
		printf("%d %d %d", thirdValue, firstValue, secondValue);
	
}

void smallFunction(int firstValue, int secondValue, int thirdValue) {
	if (firstValue < secondValue && secondValue < thirdValue && firstValue < thirdValue)
		printf("%d %d %d", firstValue, secondValue, thirdValue);
	if (firstValue < secondValue && thirdValue < secondValue && firstValue < thirdValue)
		printf("%d %d %d", firstValue, thirdValue, secondValue);
	if (secondValue < firstValue && firstValue < thirdValue && secondValue < thirdValue)
		printf("%d %d %d", secondValue, firstValue, thirdValue);
	if (secondValue < firstValue && thirdValue < firstValue && secondValue < thirdValue)
		printf("%d %d %d", secondValue, thirdValue, firstValue);
	if (thirdValue < firstValue && secondValue < firstValue && thirdValue < secondValue)
		printf("%d %d %d", thirdValue, secondValue, firstValue);
	if (thirdValue < firstValue && firstValue < secondValue && thirdValue < secondValue)
		printf("%d %d %d", thirdValue, firstValue, secondValue);
}