#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void main() {
	char userString[100], alphabet[26] = { 0 },character;
	int i, j, alphabetCount;

	gets_s(userString);
	
	for (i = 0; i < strlen(userString); i++) {
		if (userString[i] >= 'a' && userString[i] <= 'z') {
			alphabetCount = userString[i] - 'a';
			alphabet[alphabetCount]++;
		}
	}
	j = 0;
	for (i = 0; i < 26; i++) {
		if (j < alphabet[i]) {
			j = alphabet[i];
			character = i;
		}
	}

	printf("Highest frequency element : %c - %d", character + 'a',j);

	printf("\n");
	system("pause");
}