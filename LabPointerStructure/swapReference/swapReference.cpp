/*
Write a program in C to swap elements using call by reference.
 Test Data :
 Input the value of 1st element : 5
 Input the value of 2nd element : 6
 Input the value of 3rd element : 7
Expected Output :
The value before swapping are :
element 1 = 5
element 2 = 6
element 3 = 7

The value after swapping are :
element 1 = 7
element 2 = 5
element 3 = 6
void swapNumbers(int *x,int *y,int *z);
*/

#include <stdio.h>
#include <stdlib.h>


void swapRef(int *x, int *y, int *z);

void main() {

	int element[3];

	for (int i = 0;i < 3;i++) {
		printf("Input the value of %d element: ", i + 1);
		scanf("%d", &element[i]);
	}

	//BEFORE SWAP
	printf("\nThe value before swapping are : \n");
	for (int i = 0;i < 3;i++)
		printf("element %d = %d\n", i + 1, element[i]);

	swapRef(&element[0], &element[1], &element[2]); //SWAP FUNCTION

	//AFTER SWAP
	printf("\nThe value after swapping are : \n");
	for (int i = 0;i < 3;i++)
		printf("element %d = %d\n", i + 1, element[i]);


	printf("\n");
	system("pause");
}

void swapRef(int *x, int *y, int *z) {
	int temp1, temp2;

	temp1 = *x;
	temp2 = *y;
	*x = *z;
	*y = temp1;
	*z = temp2;
}
