#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100
#define ALPHABETLOW "abcdefghijklmnopqrstuvwxyz"
#define ALPHABETUP "ABCDEFGHIJKLMNOPQRSTUVWXYZ"

bool isAnagram(char *text1, char *text2);

void main() {
	char userInp1[MAX], userInp2[MAX];

	printf("Input the first String: ");
	gets_s(userInp1);

	printf("Input the second String: ");
	gets_s(userInp2);

	if (isAnagram(userInp1, userInp2))
		printf("\n\"%s\" and \"%s\" are Anagram", userInp1, userInp2);
	else
		printf("\n\"%s\" and \"%s\" are not Anagram", userInp1, userInp2);

	printf("\n");
	system("pause");
}

bool isAnagram(char *text1, char *text2) {
	int len1, len2;
	int i, j, count1 = 0, count2 = 0;

	len1 = strlen(text1);//len1 will save a length of first string
	len2 = strlen(text2);//len2 will save a length of second string

	//parse a first string
	for (i = 0; i < len1; i++) {
		for (j = 0; j < 26; j++) {
			if (text1[i] == ALPHABETLOW[j] || text1[i] == ALPHABETUP[j])//check each element with alphabet elements
				count1++;
		}if (text1[i] == ' ')//if there is a space
			count1++;
	}

	//parse a second string
	for (i = 0; i < len2; i++) {
		for (j = 0; j < 26; j++) {
			if (text2[i] == ALPHABETLOW[j] || text2[i] == ALPHABETUP[j])//check each element with alphabet elements
				count2++;
		}
		if (text2[i] == ' ')// if there is a space
			count2++;
	}

	if (count1 == len1 && count2 == len2)//if length the same then return true,otherwise false
		return true;
	
	return false;
}