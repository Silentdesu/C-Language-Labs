#include <stdio.h>
#include <stdlib.h>

/*To unterstand this code you have to read name of variables!*/
/*This code only for 4 digits number*/

void main() {
	int userInput, summation, result, moduleNumber, numberThousand,count;
	summation = 0;
	count = 0;
	numberThousand = 1000;
	do {
		printf("\tPlease type any 4 digits number!\n");
		printf("Your number: ");
		scanf_s("%d", &userInput);
	} while (userInput < 999 || userInput > 10000);
	moduleNumber = userInput; //moduleNumber will be equal userInput's number
	while (true) {
		result = moduleNumber / numberThousand; //For example userInput is 1234 then result will be equal 1.Because 1234 / 1000 = 1.234
		summation += result; // Sum is 0 then 0 + 1 will be 1
		moduleNumber %= numberThousand; //moduleNumber equal 1234 but after module(%) we take remainder and remainder equal 234
		numberThousand /= 10;//This is simple just 1000 / 10 will be 100
		count++; //Count will be count + 1 and it will start again and until when count will bigger than 3
		if (count > 3)
			break;
	}
	printf("Result = %d\n", summation);//And if userInput is 1234 then summation will be 10. 1 + 2 + 3 + 4 = 10
	system("pause");
}