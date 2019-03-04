#include<stdio.h>
#include<stdlib.h>

/*The third task of first examination*/

int main() {
	int A[4][4];
	int i, j;

	i = 0;
	//I had an error about "Corrupted A"
	//And mistake was in while loop, because I put the 16 and this is mistake
	//Because 16 will be out of range our A array
	while (i < 4) {
		for (j = 0; j < 4; j++) {
			A[i][j] = i * 4 + j + 1;
		}
		i++;
	}
	//Trying to print out two-dimensional with one loop
	//And idea was in the first index of array 
	//And the first index of array every time will be equal 0
	//But the second index every time will be increase and that is how to print out 2D array
	for (i = 0; i < 16; i++) {
		printf("%d ", A[i * 0][i]);
		if (i % 4 == 3)
			printf("\n");
	}
	printf("\n");
	system("pause");
	return 0;
}