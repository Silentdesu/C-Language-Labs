#include <stdio.h>
#include <stdlib.h>

void main(){
	int array[5],*pa;
	pa = array;
	for(int i = 0;i < 5;i++){
		scanf("%d",pa+i);
	}

	for(int i = 0;i < 5;i++){
		printf("element - %d:%d\n",i,*pa+i);
	}

	printf("\n");
	system("pause");
}