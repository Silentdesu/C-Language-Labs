#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void binaryNumber(int number);

void main() {
	int userInt;

	printf("Please type your number: ");
	scanf("%d", &userInt);
	
	printf("The binary value is: ");
	binaryNumber(userInt);
	
	printf("\n");
	system("pause");
}

void binaryNumber(int number) {
	int result;

	while (number != 0) {
		if (number % 2 == 0) {
			result = number / 2;
			printf("0");
		}
		if (number % 2 == 1) {
			result = number / 2;
			printf("1");
		}
		number = result;
	}
}