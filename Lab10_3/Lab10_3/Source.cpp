#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
	char array[20];

	printf("Your original text will be reverse: ");
	gets_s(array);

	_strrev(array);//if you has an error just remove "_" its only for visual studio 2017

	printf("Your reversed text: %s",array);

	printf("\n");
	system("pause");
}