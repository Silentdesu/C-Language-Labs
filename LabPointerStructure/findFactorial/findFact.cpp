/*
Write a program in C to find the factorial of a given number using pointers.
 Test Data :
 Input a number : 5
Expected Output :
The Factorial of 5 is : 120
*/

#include <stdio.h>
#include <stdlib.h>

int findFact(int *number);

void main() {

	int userNumber;

	do {
		printf("Input a number: ");
		scanf("%d", &userNumber);
		printf("\n");
	}while (userNumber < 0);

	printf("The factorial of %d is: %d", userNumber, findFact(&userNumber));

	printf("\n");
	system("pause");
}

int findFact(int *number) {
	int result = 1;

	for (int i = 1;i <= *number;i++)
		result *= i;

	return result;
}
