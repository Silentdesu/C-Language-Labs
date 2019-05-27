/*
	2. Write a program in C to replace a specific line with another text in a file.
	Assume that the content of the file test.txt is :
	test line 1
	test line 2
	test line 3
	test line 4


	Test Data :
	Input the file name to be opened : test.txt
	Input the content of the new line : Yes, I am the new text instead of test line 2
	Input the line no you want to replace : 2
	Expected Output :
	Replacement did successfully..!!

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {

	FILE* f, * fCopy;
	char fileName[100], newContent[100], character;
	int replaceNumber, countNewLine = 1;

	printf("Input the file name to be opened : ");
	gets_s(fileName);

	if ((f = fopen(fileName, "w")) == NULL)
		exit(1);

	for (int i = 0; i < 4; i++)
		fprintf(f, "test line %d\n", i + 1);
	fclose(f);

	if ((f = fopen(fileName, "r")) == NULL || (fCopy = fopen("copy.txt", "w")) == NULL) {
		printf("%s or copy.txt file doesn't exist", fileName);
		printf("\nPRESS \"ENTER\" TO CLOSE THIS COMMAND LINE");
		getchar();
		exit(1);
	}

	printf("Input the content of the new line : ");
	gets_s(newContent);

	printf("Input the line no you want to replace : ");
	scanf("%d", &replaceNumber);
	
	while ((character = fgetc(f)) != EOF) {
		if (character == '\n')
			countNewLine++;

		if (countNewLine != replaceNumber)
			fputc(character, fCopy);

		else {
			while (true) {
				fputc('\n', fCopy);
				for (int i = 0; i < strlen(newContent); i++)
					fputc(newContent[i], fCopy);

				while ((character = fgetc(f)) != '\n')
					fputc(' ', fCopy);

				fputc('\n', fCopy);
				countNewLine++;
				break;
			}
		}
	}

	printf("Replacement did successfully..!!");

	fclose(f);
	fclose(fCopy);
	remove(fileName);
	rename("copy.txt", fileName);
	printf("\n");
	system("pause");
}