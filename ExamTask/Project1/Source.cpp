#include<stdio.h>
#include<stdlib.h>

#define N 100

/*Second task of first semester*/

int main() {
	int array[N], index, userInput, temp;
	//Ask user to input any number between 10 and 100
	do {
		printf("Input the number of sequence:\n");
		scanf_s("%d", &userInput);
	} while (userInput < 10 || userInput > 100); //and if userInput bigger than 10 and less than 100 then it'll stop the loop

	//Just creating our array and size of array depends on user
	for (index = 0; index < userInput; index++) {
		array[index] = (index + 1) * index;
		printf("%8d", array[index]);
		//if each last digits has a difference of 3 number and it has to make a new line
		if (index % 4 == 3)
			printf("\n");
	}
	printf("\n\n\n");

	//Swap numbers from tail to head
	//We have to user number to divide by 2, because if not it will be the same sequence
	for (index = 0; index < userInput/2; index++) {
		temp = array[index];
		array[index] = array[userInput - index - 1];
		array[userInput - index - 1] = temp;
	}

	//And finally print out the changed array and each line must have 6 numbers
	for (index = 0; index < userInput; index++) {
		printf("%8d", array[index]);
		//And each 6 number we have to make a new line
		if (index % 6 == 5)
			printf("\n");
	}
	
	printf("\n");
	system("pause");
	return 0;
}