/*
	Write a program in C to print the elements of an array in reverse order.
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX 15

void main() {

	int array[MAX], numberOfArr, i, *pa;

	printf("Input the number of elements to store in the array (max 15) : ");
	scanf_s("%d", &numberOfArr);

	printf("Input %d number of elements in the array : \n", numberOfArr);
	for (i = 0, pa = &array[i];i < numberOfArr;i++, pa++) {
		printf("element - %d : ", i + 1);
		scanf_s("%d", pa);
	}

	printf("\nThe elements of array in reverse order are : \n");
	for (i = numberOfArr - 1, pa = &array[i];i >= 0;i--, pa--) 
		printf("element - %d : %d\n", i + 1, *pa);

	printf("\n");
	system("pause");
}
