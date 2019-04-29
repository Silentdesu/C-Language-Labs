/*
Write a program in C to show the usage of pointer to structure.
Expected Output :
 John Alter from Court Street
struct EmpAddress
{
char *ename;
char stname[20];
int pincode;
}employee={"John Alter","Court Street \n",654134},*pt=&employee;
*/

#include <stdio.h>
#include <stdlib.h>

struct EmpAdress {
	char *ename;
	char stname[20];
	int pincode;
}employee={"John Alter","Court Street \n",654134},*pt=&employee;



void main() {

	printf("%s from %s", pt->ename, pt->stname);

	printf("\n");
	system("pause");
}
