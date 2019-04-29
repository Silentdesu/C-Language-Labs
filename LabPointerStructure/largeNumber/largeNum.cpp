/*
Write a program in C to show how a function returning pointer.
 Test Data :
 Input the first number : 5
 Input the second number : 6
Expected Output :
 The number 6 is larger.
*/
#include <stdio.h>
#include <stdlib.h>

int largeNum(int *fNum, int *sNum);

void main() {

	int firstNum, secondNum;

	printf("Input the first number: ");
	scanf("%d", &firstNum);

	printf("Input the second number: ");
	scanf("%d", &secondNum);
	
	printf("\nThe number %d is larger", largeNum(&firstNum, &secondNum));

	printf("\n");
	system("pause");
}

int largeNum(int *fNum, int *sNum) {
	return (*fNum > *sNum ? *fNum : *sNum);
}
	
