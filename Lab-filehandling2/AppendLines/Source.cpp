/*
	3. Write a program in C to append multiple lines at the end of a text file.
	Assume that the content of the file test.txt is :
	test line 1
	test line 2
	test line 3
	test line 4


	Test Data :
	Input the file name to be opened : test.txt
	Input the number of lines to be written : 3
	The lines are :
	test line 5
	test line 6
	test line 7

	Expected Output :
	The content of the file test.txt is  :
	test line 1
	test line 2
	test line 3
	test line 4

	test line 5
	test line 6
	test line 7

*/

#include <stdio.h>
#include <stdlib.h>

void main() {

	FILE* f;
	char fileName[100];
	int numberOfLines;
	static int i;

	if ((f = fopen("test.txt", "w")) == NULL) {
		exit(1);
	}

	for (i = 0; i < 4; i++)
		fprintf(f, "test line %d\n", i + 1);
	fclose(f);

	printf("Input the file name to be opened : ");
	gets_s(fileName); //I'm using VS 2019 and if in your PC this line doesn't work, try "gets"


	if ((f = fopen(fileName, "a")) == NULL) {
		printf("This file doesn't exist");
		printf("\nPlease, press the \"Enter\" to close command line");
		getchar();
		exit(1);
	}

	printf("\nInput the number of lines to be written : ");
	scanf("%d", &numberOfLines);

	numberOfLines += i; //from the last loop i = 4;
	for (; i < numberOfLines; i++)
		fprintf(f, "test line %d\n", i + 1);
	fclose(f);

	printf("The lines has appended");
	printf("\n");
	system("pause");
}