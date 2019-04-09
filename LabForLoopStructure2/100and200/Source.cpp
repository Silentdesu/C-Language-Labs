/*
	Write a program in C to find the number of sum of all integer between 100 and 200 which are divisible by 9.
*/

#include <stdio.h>
#include <stdlib.h>

void func(int minNum, int maxNum);

int sum;

void main() {
	
	printf("Numbers betweem 100 and 200, divisible by 9:\n");
	func(100, 200);

	printf("\n");
	system("pause");
}

void func(int minNum, int maxNum) {
	int i;
	int n = 9, sum = 0;

	for (i = minNum; i < maxNum; i++) {
		if (i % n == 0) { //If we found a number print it and sum it
			printf("%d ", i);
			sum += i;
		}
	}
	printf("\nThe sum: %d", sum);
}