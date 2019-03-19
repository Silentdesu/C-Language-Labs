#include <stdio.h>
#include <stdlib.h>

void main(){
	int m = 300,*pi;
	float fx = 300.600006,*pf;
	char cht = 'z',*pc;
	pi = &m;
	pf = &fx;
	pc = &cht;

	printf("Using & operator\n");
	printf("address of m = %p\n",&m);
	printf("address of fx = %p\n",&fx);
	printf("address of cht = %p\n\n",&cht);

	printf("Using & and * operators\n");
	printf("value at address m = %d\n",*(&m));
	printf("value at address fx = %f\n",*(&fx));
	printf("value at address cht = %c\n\n",*(&cht));

	printf("Using only pointer variable\n");
	printf("address of m = %p\n",pi);
	printf("address of fx = %p\n",pf);
	printf("address of cht = %p\n\n",pc);

	printf("Using only pointer operator\n");
	printf("value at address of m = %d\n",*pi);
	printf("value at address of fx = %f\n",*pf);
	printf("value at address of cht = %c\n",*pc);

	printf("\n");
	system("pause");
}