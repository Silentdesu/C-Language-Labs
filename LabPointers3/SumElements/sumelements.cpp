/*
	Write a program in C to compute the sum of all elements in an array using pointers.
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX 10

void main() {

	int array[MAX], sum = 0, *pa;
	int i, numberOfArr;

	printf("Input the number of elements to store in the array (max 10): ");
	scanf_s("%d", &numberOfArr);

	printf("Input %d number of elements in the array : \n\n", numberOfArr);
	for (i = 0, pa = &array[i];i < numberOfArr;i++, pa++) {
		printf("element - %d : ", i + 1);
		scanf_s("%d", pa);
		printf("\n");
		sum += *pa;
	}

	printf("The sum of array: %d", sum);
	printf("\n");
	system("pause");
}
