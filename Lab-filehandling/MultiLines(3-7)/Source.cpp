/*
	3. Write a program in C to write multiple lines in a text file. 
	 Test Data : 
	 Input the number of lines to be written : 4 
	 :: The lines are :: 
	 test line 1 
	 test line 2 
	 test line 3 
	 test line 4 
	 Expected Output :
	 The content of the file test.txt is  :                                                                       
	 test line 1                                                                                                   
	 test line 2                                                                                                   
	 test line 3                                                                                                   
	 test line 4 

	4. Write a program in C to read the file and store the lines into an array. 
	 Test Data : 
	 Input the file name to be opened : test.txt 
	 Expected Output :
	 The content of the file test.txt  are :                                                                      
	 test line 1                                                                                                  
	 test line 2                                                                                                  
	 test line 3                                                                                                  
	 test line 4

	 5. Write a program in C to Find the Number of Lines in a Text File. 
	 Test Data : 
	 Input the file name to be opened : test.txt 
	 Expected Output :
	 The lines in the file test.txt are : 4 

	 6. Write a program in C to find the content of the file and number of lines in a Text File. 
	 Test Data : 
	 Input the filen ame to be opened : test.txt 
	 Expected Output :
	 The content of the file test.txt  are :                                                                      
	 test line 1                                                                                                  
	 test line 2                                                                                                  
	 test line 3                                                                                                  
	 test line 4                                                                                                  
	 The lines in the file are : 4

	 7. Write a program in C to count a number of words and characters in a file. 
	 Test Data : 
	 Input the file name to be opened : test.txt 
	 Expected Output :
	 The content of the file test.txt are :                                                                       
	 test line 1                                                                                                   
	 test line 2                                                                                                   
	 test line 3                                                                                                   
	 test line 4                                                                                                   
	 The number of words in the  file test.txt are : 12                                                           
	 The number of characters in the  file test.txt are : 36

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {

	FILE *fp;
	int numLines, countLines = 0, countChar = 0, countWords = 0;

	if ((fp = fopen("test.txt", "w")) == NULL)
		exit(1);

	printf("Input the number of lines to be written: ");
	scanf("%d", &numLines);
	/*	STORING DATA	*/
	for (int i = 0;i < numLines;i++)
		fprintf(fp, "test line %d\n", i + 1);
	printf("DATA HAS BEEN SUCCESFULLY STORED\n\n");
	fclose(fp);

	/*	READING DATA	*/
	char fileRMode[100];

	if ((fp = fopen("test.txt", "r")) == NULL)
		exit(1);

	while((fgets(fileRMode, 100, fp) != NULL)) {
		printf("%s", fileRMode);
		for (int i = 0;i < strlen(fileRMode);i++) {
			
			// COUNTING A CHARACTERS IN LINES
			if (fileRMode[i] >= 'a' && fileRMode[i] <= 'z' || fileRMode[i] >= '0' && fileRMode[i] <= '9')
				countChar++;
			
			//COUNTING A WORDS IN LINES
			if(fileRMode[i] == ' ' || fileRMode[i] == '\n')
				countWords++;
		}
		countLines++;
	}
	printf("\nThe lines in the file test.txt are: %d", countLines); //	SHOW AMOUNT OF LINES IN THE FILE
	printf("\nThe number of words in the file test.txt are: %d", countWords);
	printf("\nThe number of characters in the file test.txt are: %d", countChar);

	fclose(fp);
	printf("\n");
	system("pause");
}