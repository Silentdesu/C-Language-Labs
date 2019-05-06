/*

	 assume there is a struct array boy, defined as 

	struct stu 
	{  int num; 
	   char name[20]; 
	   char sex; 
	   float score; 
	}boy[6]={{101,¡°li ping ¡±,¡¯m¡¯,45}, 
			{102,¡°zhang ping¡±,¡¯m¡¯,62.5}, 
			{103,¡°he fang¡±,¡¯m¡¯,92.5}, 
			{104,¡°cheng ling¡±,¡¯f¡¯,87}, 
			{106£¬¡°wang ming¡±,¡¯m¡¯,58},}; 

	1£©	calculate  the number of students that failed the exam 
	requirement: using the struct pointer as subfunction¡¯s argument.
	2) output all the student information that passed the exam.


*/

#include <stdio.h>
#include <stdlib.h>

struct stu {
	int num;
	char name[20];
	char gender;
	float score;
}boy[6] = { {101, "li ping", 'm', 45},
			{102, "zhang ping", 'm', 62.5},
			{103, "he fang", 'm', 92.5},
			{104, "cheng ling", 'f', 87},
			{105, "wang ming", 'm', 58}
		  };

void main() {

	struct stu *ps = boy;
	int countFailed = 0;

	for (int i = 0;i < 5;i++) {
		if (ps[i].score < 60)
			countFailed++;
	}

	printf("1)Amount of students that failed the exam: %d\n\n", countFailed);

	printf("2)Student that passed the exam: \n");
	for (int i = 0;i < 5;i++)
		if (ps[i].score > 60)
			printf("\t%d.%d %s %c %.1f\n", i, ps[i].num, ps[i].name, ps[i].gender, ps[i].score);

	printf("\n");
	system("pause");
}