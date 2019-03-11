#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void main() {
	char array[20], x;
	int i;

	printf("Please type any word: ");
	gets_s(array);
	printf("\nPlease type any character: ");
	scanf_s("%c", &x);
	
	for (i = 0; array[i] != '\0'; i++) {
		if (array[i] == x)
			array[i] = ' ';
	}

	printf("\nYour character was replaced with space: %s\n", array);

	printf("\n");
	system("pause");
}