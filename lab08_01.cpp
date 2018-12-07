#include<stdio.h>
#include<stdlib.h>

#define NUMBEROFARRAY 4

void main() {
	int a[NUMBEROFARRAY][NUMBEROFARRAY];
	int i,j;
	for (i = 0; i < NUMBEROFARRAY; i++)
		for (j = 0; j < NUMBEROFARRAY; j++)
			a[i][j] = i * 4 + j + 1;
	//Print the array
	for (i = 0; i < NUMBEROFARRAY; i++) {
		for (j = 0; j < NUMBEROFARRAY; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}

	system("pause");
}