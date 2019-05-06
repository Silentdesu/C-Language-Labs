/*

																						---TASK---
		Given several student¡¯s information, including ID, Name, Scores for 3 courses, calculate the amount of the scores for each student, and output according to the requirement.

																						---INPUT---
		Input an integer n, represent n students¡¯ information is included.Input the ID, name, scores for 3 courses.

																						---OUTPUT---
		Output the ID, name and score amount. One line for one student.

*/

#include <stdio.h>
#include <stdlib.h>

struct studentsInformation {
	int studentID;
	char studentName[15];
	int firstCourse, secondCourse, thirdCourse;
};

void main() {
	struct studentsInformation studentArray[100];
	int amoutOfStudents;

	printf("Please type amount of students: ");
	scanf("%d", &amoutOfStudents);

	printf("\n\nID, name, score for 3 courses\n\n");
	for(int i = 0;i < amoutOfStudents;i++) {
		printf("Student N%d\nID: ", i + 1);
		scanf("%d", &studentArray[i].studentID);
		printf("Student name: ");
		scanf("%s", studentArray[i].studentName);
		printf("Score for 3 courses: ");
		scanf("%d%d%d", &studentArray[i].firstCourse, &studentArray[i].secondCourse, &studentArray[i].thirdCourse);
		printf("\n\n");
	}
	printf("\n\n\n");

	for (int i = 0;i < amoutOfStudents;i++)
		printf("ID: %d | Student name: %s | Sum of 3 courses: %d\n", studentArray[i].studentID, studentArray[i].studentName, (studentArray[i].firstCourse + studentArray[i].secondCourse + studentArray[i].thirdCourse));

	printf("\n");
	system("pause");
}