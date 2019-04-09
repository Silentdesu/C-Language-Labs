/*
	Write a program in C to convert a binary number into a decimal number without using array, function and while loop.
*/

#include <stdio.h>
#include <stdlib.h>

void main() {

	int userBin;
	int i, j, result, sum = 0, x;

	printf("Input a binary number: ");
	for (i = 8; i > 0; i--) {

		scanf_s("%d", &userBin); // you have to write each number with space

		if (userBin == 1) { //if userBin = 1 then enter the statement
		
			if (i == 1) { //power of the last Binary number always equal 0
				sum += 1;
				break;
			}

			x = 2;
			for (j = i - 1; j > 1; j--) {
				result = userBin * (x * 2);
				x = result;
			}

			sum += result;
		}
			
	}
		printf("\nThe equivalent Decimal Number: %d", sum);

		printf("\n");
		system("pause");
}
