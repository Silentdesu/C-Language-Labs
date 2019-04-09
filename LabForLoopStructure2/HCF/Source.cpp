/*
	Write a C program to find HCF(Highest Common Factor) of two numbers.
*/
#include <stdio.h>
#include <stdlib.h>

int HCF(int fNum, int sNum);

void main() {
	int firstNum, secondNum;

	printf("Input 1st number for HCF: ");
	scanf_s("%d", &firstNum);

	printf("Input 2nd number for HCF: ");
	scanf_s("%d", &secondNum);

	printf("HCF of %d and %d is : %d", firstNum, secondNum, HCF(firstNum, secondNum));

	printf("\n");
	system("pause");
}

int HCF(int fNum, int sNum) {
	int temp;
	int i, result;

	if (fNum < sNum) { //Every time first number will be bigger than second number
		temp = fNum;
		fNum = sNum;
		sNum = temp;
	}

	for (i = fNum; i > 0; i--) { 
		if ((fNum % i == 0) && (sNum % i == 0))	//Check if two numbers can be divide by i index without reminder
			return i;
	}
}