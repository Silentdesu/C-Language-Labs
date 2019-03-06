#include <stdio.h>
#include <stdlib.h>

/*Problem about create a matrix 7x5*/

void main() {
	int array[7][5];
	int i, j;
	i = 0;
	//it'll be our matrix
	while (i < 7) {
		for (j = 0; j < 5; j++) {
			array[i][j] = i * j;
		}
		i++;
	}
	printf("First way to print out our matrix 7x5\n\n");
	//and print out our matrix with one loop it's way first way
	for (i = 0; i < 35; i++) {
		printf("%d ", array[i / 5][i % 5]);
		if (i % 5 == 4)
			printf("\n");

	}
	
	printf("\n\n\n\n");

	//and the second way
	printf("Second way to print out our matrix 7x5\n\n");
	for (i = 0; i < 35; i++) {
		printf("%d ", array[0][i]);
		if (i % 5 == 4)
			printf("\n");

	}

	printf("\n");
	system("pause");
}