#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void main() {
	char userString[100], alphabet[26] = { 0 },character;//alphabet array will contain the entire English alphabet, will not contain characters, but numbers
	int i, j, alphabetCount;//alphbetCount will help us to find highest frequency of a symbol

	gets_s(userString);//ask an user to write any string.Example user's input: hello
	
	for (i = 0; i < strlen(userString); i++) {
		if (userString[i] >= 'a' && userString[i] <= 'z') {//and if a symbol in the ASCII range >= 'a' and <= 'z' then it's true
			alphabetCount = userString[i] - 'a';//Example: alphabetCount = 'h' - 'a' <=> alphabetCount = 104 - 97
			alphabet[alphabetCount]++;//Example: alphabet[7]++;
		}
	}

	j = 0;
	for (i = 0; i < 26; i++) {
		if (j < alphabet[i]) {//trying to find a symbol's highest frequency of string
			j = alphabet[i];//j will save a number of highest frequency.In our example j = 2
			character = i;//character will save a number of index i.In our example character = 11
		}
	}

	printf("Highest frequency element : %c - %d", character + 'a',j);//Example: character = 11 <=> 11 + 97 = 108 <=> 108 equals to 'l' symbol and HF = 2.

	printf("\n");
	system("pause");
}