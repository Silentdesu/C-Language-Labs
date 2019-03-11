#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
	char array[5][20], max[20];
	int i;

	printf("Please write 5 strings: \n");
	for (i = 0; i < 5; i++) {
		gets_s(array[i]); //if you has an error, try this "scanf_s("%s",array[i]);
	}
	printf("\n\n");

	strcpy_s(max, array[0]); //assign first word of array to max

	for (i = 0; i < 5; i++) {
		if (strcmp(max, array[i]) < 0) //make a compare between this two arrays. And if a next value will be greater
			strcpy_s(max, array[i]);  //Then this word will be copy to max
	}
	printf("The biggest string: %s", max); //It will print out the biggest one because of ACII,it means
	printf("\n");						  //If user will type 'aaa','bbb','ccc','ddd','zzz'
	system("pause");				     //print out will be 'zzz' because it bigger than others one
}