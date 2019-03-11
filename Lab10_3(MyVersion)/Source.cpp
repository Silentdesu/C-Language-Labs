#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
	char array[20], temp;
	int i, j;

	printf("Your original text: ");
	gets_s(array);
	
	//strlen(array) - 1 / 2. -1 means that we'll remove '\0'.
		for (j = 0; j < (strlen(array) - 1)/2; j++) {
			temp = array[j];
			array[j] = array[strlen(array) - j - 1];
			array[strlen(array) - j - 1] = temp;
		}

	printf("\nYour reversed text: %s\n", array);

	printf("\n");
	system("pause");
}