#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
	char userString[100], temp;
	int i, j;

	printf("Please type your string --> ");
	gets_s(userString);

	//Ascending order from min to max character
	for (i = 0; i < strlen(userString); i++) {
		for (j = i; j < strlen(userString); j++) {
			if (userString[i] > userString[j]) {
				temp = userString[i];
				userString[i] = userString[j];
				userString[j] = temp;
			}
		}
	}
	
	printf("\nAscending order: %s\n", userString);

	printf("\n");
	system("pause");
}
