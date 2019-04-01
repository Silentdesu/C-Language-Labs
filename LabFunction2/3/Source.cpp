#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

void largestValue(int number);

void main() {

	int userInput;

	printf("Please input the number of elements to be stored in the array : ");
	scanf("%d", &userInput);
	
	printf("Input %d elements in the array :\n", userInput);

	largestValue(userInput);

	printf("\n");
	system("pause");
}

void largestValue(int number) {
	int array[SIZE];
	int maxNumber, i;

	for(i = 0;i < number;i++) {
		printf("element - %d : ", i);
		scanf_s("%d", &array[i]);
		printf("\n");
	}

	maxNumber = array[0];
	for(i = 0;i < number;i++) {
		if (maxNumber < array[i])
			maxNumber = array[i];	
	}
printf("The largest element in the array is : %d", maxNumber);
}
