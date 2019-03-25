#include <stdio.h>
#include <stdlib.h>

int factorialSum(int userValue);

void main(){
	int userInput;

	scanf_s("%d", &userInput);

	printf("\n%d", factorialSum(userInput));

	printf("\n");
	system("pause");
}

int factorialSum(int userValue) {
	int result;
	int sum = 0;
	for(int i = 1; i <= userValue; i++){
		result = 1;
		for(int j = 2; j <= i; j++){
			result *= j;
		}
		result /= i;
		sum += result;
	}
	return sum;
}