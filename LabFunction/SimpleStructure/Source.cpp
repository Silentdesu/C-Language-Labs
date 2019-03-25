#include <stdio.h>
#include <stdlib.h>

int simpleFunction(int firstValue, int secondValue);

void main(){

	printf("The total is: %d", simpleFunction(5, 6));

	printf("\n");
	system("pause");
}

int simpleFunction(int firstValue, int secondValue) {
	return (firstValue + secondValue);
}