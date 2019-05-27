/*
	1. Write a program in C to delete a specific line from a file.
	Assume that the content of the file test.txt is :
	test line 1
	test line 2
	test line 3
	test line 4


	Test Data :
	Input the file name to be opened : test.txt
	Input the line you want to remove : 2
	Expected Output :
	The content of the file test.txt is :
	test line 1
	test line 3
	test line 4

*/

#include <stdio.h>
#include <stdlib.h>

void main() {

	FILE* f1, * f2;
	int delLine, newLine = 1;
	char fileName[100], character;

	if ((f1 = fopen("copy.txt", "w+")) == NULL)
		exit(1);

	printf("Input the file name to be opened : ");
	gets_s(fileName); //IF DOESN'T WORK, TRY "gets"

	if ((f2 = fopen(fileName, "w")) == NULL)
		exit(1);

	for (int i = 1; i <= 4; i++)
		fprintf(f2, "test line %d\n", i);
	fclose(f2);

	if ((f2 = fopen(fileName, "r")) == NULL) {
		printf("This file doesn't exist");
		printf("\nPress anything to close command line");
		getchar();
		exit(1);
	}

	printf("\nInput the line you want to remove : ");
	scanf("%d", &delLine);

	while ((character = fgetc(f2)) != EOF) {
		if (character == '\n')
			newLine++;
		if (newLine != delLine)
			fputc(character, f1);
	}

	fclose(f1);
	fclose(f2);
	printf("The line has deleted");

	remove(fileName);
	rename("copy.txt", fileName);

	printf("\n");
	system("pause");
}