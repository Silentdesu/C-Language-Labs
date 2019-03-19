#include <stdio.h>
#include <stdlib.h>

void main(){
	int m = 29, *ab;
	printf("Address of m: %p\n",&m);
	printf("Value of m: %d\n",m);

	printf("\n");
	ab = &m;
	printf("Now ab is assigned with address of m\n");
	printf("Address of pointer ab: %p\n",ab);
	printf("Content of pointer ab: %d\n",*ab);
	
	printf("\n");
	m = 34;
	printf("The value of m assigned to 34 now.\n");
	printf("Address of pointer ab: %p\n", ab);
	printf("Content of pointer ab: %d\n", *ab);

	printf("\n");
	*ab = 7;
	printf("The pointer variable ab is assigned with the value 7 now.\n");
	printf("Address of m: %p\n", &m);
	printf("Value of m: %d\n", m);
	printf("\n");
	system("pause");
}