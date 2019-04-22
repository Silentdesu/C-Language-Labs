/*
	Write a program in C to Calculate the length of the string using a pointer.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {

	int count = 0, *pc = &count;
	char userString[100];

	printf("Input a string : ");
	gets_s(userString);

	for (int i = 0;i < strlen(userString);i++)
		(*pc)++;

	printf("\nhe length of the given string %s is: %d", userString, *pc);

	printf("\n");
	system("pause");
}
