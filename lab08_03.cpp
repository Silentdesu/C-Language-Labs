#include<stdio.h>
#include<stdlib.h>

#define NUMBEROFARRAY 4

void main() {
	int a[NUMBEROFARRAY][NUMBEROFARRAY];
	int i, j,max;
	//Input numbers into array A 4x4
	printf("Please type any numbers into array A 4x4:\n");
	for (i = 0; i < NUMBEROFARRAY; i++) {
		for (j = 0; j < NUMBEROFARRAY; j++)
			scanf_s("%d", &a[i][j]);
	}
	//Print max numbers in total will be 4 numbers
	printf("\n\n\n\n");
	printf("The max value of each row\n");
	for (i = 0; i < NUMBEROFARRAY; i++) {
		max = a[0][0];
		for (j = 0; j < NUMBEROFARRAY; j++) {
			if (max < a[i][j])
				max = a[i][j];
		}
		printf("%d\n", max);
	}



	system("pause");
}