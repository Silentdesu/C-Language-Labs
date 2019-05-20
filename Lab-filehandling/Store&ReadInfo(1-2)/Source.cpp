/*
	1. Write a program in C to create and store information in a text file. 
	Test Data : 
	Input a sentence for the file : This is the content of the file test.txt. 
	Expected Output :
	The file test.txt created successfully...!!

	2. Write a program in C to read an existing file. 
	Test Data : 
	Input the file name to be opened : test.txt 
	Expected Output :
	The content of the file test.txt is  :                                                                       
	This is the content of the file test.txt.


*/

#include <stdio.h>
#include <stdlib.h>

void main() {

	FILE *fp;
	
	if ((fp = fopen("test.txt", "w")) == NULL)
		exit(1);
	/*		STORE DATA		*/
	else {
		fprintf(fp,"This is the content of the file test.txt.");
		printf("The file test.txt created successfully...!!");
		printf("\n\tDATA HAS STORED\n\n");
	}
	fclose(fp);

	/*		READ DATA FROM THE FILE		*/
	if ((fp = fopen("test.txt", "r")) == NULL)
		exit(1);
	
	char fileRMod[100];

	printf("\tREAD FROM THE FILE\n");
	while((fscanf(fp, "%s", fileRMod)) != EOF)
		printf("%s ", fileRMod);
	fclose(fp);

	
	printf("\n");
	system("pause");
}