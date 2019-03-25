#include <stdio.h>
#include <stdlib.h>

void calcFunction(int choice, int firstValue, int secondValue);

void main(){
	int userChoice, userFInput, userSInput;
	char userAnswer;

	do{
		//ask user to choose and type a numbers
		printf("1.Add\n2.Substract\n3.Multiply\n4.Divide\n5.Module\n\n");
		printf("Enter your choice: ");
		scanf_s("%d", &userChoice);
		printf("Enter 1st number: ");
		scanf_s("%d", &userFInput);
		printf("Enter 2nd number: ");
		scanf_s("%d", &userSInput);

		calcFunction(userChoice, userFInput, userSInput);//Our calculator

		printf("Continue? (y/n)\n");//ask user about continue
		flushall();
		fflush(stdin);//trying to refresh our buffer
		scanf("%c", &userAnswer);

		printf("\n");
	}while(userAnswer == 'y');

	printf("\n");
	system("pause");
}

void calcFunction(int choice, int firstValue, int secondValue) {
	int result;
	if (choice == 1)
		result = firstValue + secondValue;
	if (choice == 2)
		result = firstValue - secondValue;
	if (choice == 3)
		result = firstValue * secondValue;
	if (choice == 4)
		result = firstValue / secondValue;
	if (choice == 5)
		result = firstValue % secondValue;
	
	printf("Result: %d\n", result);

}

