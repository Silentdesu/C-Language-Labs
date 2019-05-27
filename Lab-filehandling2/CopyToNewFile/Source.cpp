/*
	4. Write a program in C to copy a file in another name.
	Assume that the content of the file test.txt is :
	test line 1
	test line 2
	test line 3
	test line 4


	Test Data :
	Input the source file name : test.txt
	Input the new file name : test1.txt
	Expected Output :
	The file test.txt  copied successfully in the file test1.txt.


	If you read the new file you will see the content of the file :
	test line 1
	test line 2
	test line 3
	test line 4

*/

#include <stdio.h>
#include <stdlib.h>

void main() {

	FILE* fSource, * fNew;
	char sourceFile[100], newFile[100], c;

	printf("Input the source file name : ");
	gets_s(sourceFile); //IF THIS LINE DOESN'T WORK, THEN TRY "gets"

	printf("Input the new file name : ");
	gets_s(newFile); 

	if ((fSource = fopen(sourceFile, "w")) == NULL || ((fNew = fopen(newFile, "w")) == NULL))
		exit(1);

	for (int i = 0; i < 4; i++)
		fprintf(fSource, "test line %d\n", i + 1);
	fclose(fSource);

	if ((fSource = fopen(sourceFile, "r")) == NULL)
		exit(1);

	while ((c = fgetc(fSource)) != EOF)
		fputc(c, fNew);

	printf("\nThe file %s copied successfully in the file %s.", sourceFile, newFile);

	fclose(fSource);
	fclose(fNew);
	printf("\n");
	system("pause");
}