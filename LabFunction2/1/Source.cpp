#include <stdio.h>
#include <stdlib.h>

bool isPrime(int firstNum, int secondNum);

void main() {
	int fNumber = 2, sNumber = 160;

	while(fNumber < sNumber){
		if (isPrime(fNumber, sNumber))
			printf("%d is divisor of %d\n", fNumber, sNumber);
		fNumber++;
	}

	printf("\n");
	system("pause");
}

bool isPrime(int firstNum, int secondNum) {
	if (firstNum <= 1)//skip this numbers, because they are not a prime numbers
		return false;
	if (firstNum == 2)// in our case we have to do this
		return true;

	if (firstNum % 2 == 1)
		if (secondNum % firstNum == 0)
			return true;
		else
			return false;
}