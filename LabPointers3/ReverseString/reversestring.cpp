/*
	Write a program in C to print a string in reverse using a pointer.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    char string[100], revString[100];
	char *ps, *prs = revString, temp;
	int i;

	printf("Input a string : ");
	gets_s(string);

	for(i = 0, ps = &string[strlen(string) - 1];i < strlen(string);i++, ps--, prs++)
		*prs = *ps;
	*prs = '\0';

	printf("Reverse of the string is : %s\n", revString);

    system("pause");
}
