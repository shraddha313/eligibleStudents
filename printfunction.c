#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

void printfunction(struct student s[])
{
	// Loop to iterate over the students
	printf("\n--- --- STUDENT DATA --- ---\n");
	// students records
	for (int i = 0; i < s[0].n; i++)
	{
		printf("Name of student %s \n", s[i].name);
		printf("Student roll number = %d \n", s[i].rno);
		printf("Student fees status = %c \n", s[i].fees);
		printf("Student number of days present = %f \n", s[i].days);
		printf("Student attendence = %f \n", s[i].attend);
		printf("--- --- --- --- ---\n");
	}
}
