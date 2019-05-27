/*
	6. Write a program in C to remove a file from the disk.
	   Test Data :
	   Input the name of file to delete : test.txt
	   Expected Output :
	   The file test.txt is deleted successfully..!!
*/

#include <stdio.h>
#include <stdlib.h>

void main() {

	FILE* f;
	char fileName[100];

	printf("Input a name for the file : ");
	gets_s(fileName); //IF THIS LINE DOESN'T WORK, TRY "gets"

	if ((f = fopen(fileName, "w")) == NULL)
		exit(1);

	printf("File has created! Look at the folder");
	getchar();
	fclose(f);

	remove(fileName);
	printf("\nThe file test.txt is deleted successfully..!!");

	printf("\n");
	system("pause");
}