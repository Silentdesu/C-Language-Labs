#include <stdio.h>
#include <stdlib.h>

void swap(int *num1, int *num2);

void main() {

	int n,m;
	printf("enter two numbers:\n");
	scanf("%d%d", &n, &m);
	printf("values before swapping are %d and %d\n",n,m);
	swap(&n,&m);
	printf("values after swapping are %d and %d\n",n,m);
	
	printf("\n");
	system("pause");
}

void swap(int *num1, int *num2) {
	int swap;
	swap = *num1;
	*num1 = *num2;
	*num2 = swap;
}