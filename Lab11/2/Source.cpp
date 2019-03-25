#include <stdio.h>
#include <stdlib.h>

void multTable();

void main(){

	multTable();

	printf("\n");
	system("pause");
}

void multTable() {
	for(int i = 1;i <= 9;i++){
		for(int j = 1;j <= 9;j++){
			printf("%d * %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}
}

