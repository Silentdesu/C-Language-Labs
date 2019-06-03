#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLEN 10

void main() {

	FILE *fptr;
	int i,n;
	char str[100];
	char fname[20]="test.txt";
	char x[20];
	char sss[MAXLEN][20];

	printf("\n\n Write multiple lines in a text file and read the file:\n");
	printf("----------------------------------------------------\n");
	printf("Input the number of lines to be written:");
	scanf("%d", &n);
	printf("\n :: The lines are ::\n");
	
	fptr = fopen(fname, "r");
	for(i = 0;i < n;i++) {
		fgets(str, 100, fptr);
		puts(str);
	}
	fclose(fptr);

	fptr = fopen(fname, "r");
	printf("\n The content of the file %s is :\n", fname);

	printf("Read %d strings:     \n", n);
		for (i = 0;i < n;i++)
			fscanf(fptr,"%s",sss[i]);
	strcpy(x,sss[0]);
	for(i = 1;i < n;i++) {
		if(strcmp(x,sss[i]) < 0)
			strcpy(x, sss[i]);
	}

	printf("The biggest string is:   \n");
	puts(x);
	printf("\n\n");
	fclose(fptr);
	printf("\n");
	system("pause");
}