#include<stdio.h>
#include<stdlib.h>

#define NUMBEROFARRAY 4

void main() {
	int a[NUMBEROFARRAY][NUMBEROFARRAY];
	int i, j, max, min, sum;
	//Input numbers into array A 4x4
	printf("Please input any numbers into array 4x4:\n");
	for (i = 0; i < NUMBEROFARRAY; i++) {
		for (j = 0; j < NUMBEROFARRAY; j++)
			scanf_s("%d", &a[i][j]);
	}
	//Print max and min and make summation
	printf("\n\n\n\n");
	for (i = 0; i < NUMBEROFARRAY; i++) {
		min = a[3][3];
		max = a[0][0];
		for (j = 0; j < NUMBEROFARRAY; j++) {
			if (max < a[i][j])
				max = a[i][j];
			if (min > a[i][j])
				min = a[i][j];
		}
		sum = max + min;
		printf("%d + %d = %d\n", max, min, sum);
	}

	system("pause");
}