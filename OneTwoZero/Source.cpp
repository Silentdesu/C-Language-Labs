#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
	char userString[3][20], temp[20];
	int i, j;

	printf("Type 3 strings: \n");
	for (i = 0; i < 3; i++)
		gets_s(userString[i]);//I had a problem with input,and I used a gets_s function

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			if (strcmp(userString[i], userString[j]) < 0) {
				strcpy_s(temp, userString[i]);
				strcpy_s(userString[i], userString[j]);
				strcpy_s(userString[j], temp);
			}
		}
	}
	printf("\n\n");

	printf("The string appears after sorting: \n");
	for (i = 0; i < 3; i++)
		printf("%s\n", userString[i]);

	printf("\n");
	system("pause");
}