/*
	5. Write a program in C to merge two files and write it in a new file.
	Assume that the content of the file test.txt and test1.txr is :
	The content of the file test.txt is  :
	This is the file test.txt.

	The content of the file test1.txt is  :
	This is the file test1.txt.


	Test Data :
	Input the 1st file name : test.txt
	Input the 2nd file name : test1.txt
	Input the new file name where to merge the above two files : mergefiles.txt
	Expected Output :
	The two files merged into mergefiles.txt file successfully..!!


	Here is the content of the merge file mergefiles.txt :
	The content of the file mergefiles.txt is  :
	This is the file test.txt.
	This is the file test1.txt.
*/

#include <stdio.h>
#include <stdlib.h>

void main() {

	FILE* f1, * f2, * fMerge;
	char fFile[100], sFile[100], mergeFile[100], character;
	static int i;

	printf("Input the 1st file name : "); // FIRST FILE
	gets_s(fFile); //IF DOESN'T WORK, THEN "gets"

	printf("Input the 2nd file name : "); // SECOND FILE
	gets_s(sFile);

	printf("Input the new file name where to merge the above two files : "); // MERGE FILE
	gets_s(mergeFile);

	if ((f1 = fopen(fFile, "w")) == NULL || (f2 = fopen(sFile, "w")) == NULL || (fMerge = fopen(mergeFile, "w")) == NULL) {
		exit(1);
	}

	for (int i = 0; i < 4; i++)
		fprintf(f1, "this test line %d\n", i + 1);

	for (int i = 10; i < 15; i++)
		fprintf(f2, "this test line %d\n", i);

	fclose(f1);
	fclose(f2);
	fclose(fMerge);

	if ((f1 = fopen(fFile, "r")) == NULL || (f2 = fopen(sFile, "r")) == NULL || (fMerge = fopen(mergeFile, "a")) == NULL) {
		printf("1st or 2nd file doesn't exist, press enter to close cmd");
		getchar();
		exit(1);
	}

	while ((character = fgetc(f1)) != EOF)
		fputc(character, fMerge);

	while ((character = fgetc(f2)) != EOF)
		fputc(character, fMerge);

	printf("The two files merged into mergefiles.txt file successfully..!!");
	fclose(f1);
	fclose(f2);
	fclose(fMerge);
	printf("\n");
	system("pause");
}