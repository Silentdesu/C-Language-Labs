#include<stdio.h>
#include<stdlib.h>

#define NUMBEROFARRAY 4

void main() {
	int a[NUMBEROFARRAY][NUMBEROFARRAY],b[NUMBEROFARRAY][NUMBEROFARRAY];
	int i, j;
	//Input numbers into array A 4x4
	printf("Please type any numbers into array A 4x4:\n");
	for (i = 0; i < NUMBEROFARRAY; i++) {
		for (j = 0; j < NUMBEROFARRAY; j++)
			scanf_s("%d", &a[i][j]);
	}
	for (i = 0; i < NUMBEROFARRAY; i++)
		for (j = 0; j < NUMBEROFARRAY; j++)
			b[i][j] = (i + j) * a[i][j];
	//Print the array
	printf("\n\n\n\n");
	printf("Arrayf of B took the numbers from the array A with this formula b[i][j] = (i + j) * a[i][j]\n");
	for (i = 0; i < NUMBEROFARRAY; i++) {
		for (j = 0; j < NUMBEROFARRAY; j++)
			printf("%d ", b[i][j]);
		printf("\n");
	}


	system("pause");
}