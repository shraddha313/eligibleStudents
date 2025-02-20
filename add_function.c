#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

void add(struct student s[])
{
	float totalDays;
	printf("\nEnter the total number of working days :: ");
	scanf("%f", &totalDays);

	int numberOfStudents;
	printf("Enter the number of students :: ");
	scanf("%d", &numberOfStudents);
	s[0].n = numberOfStudents;
	s[0].tdays = totalDays;
	printf("\n--- --- ENTER THE STUDENT DATA --- ---\n");
	for (int i = 0; i < numberOfStudents; i++)
	{

		s[i].n = numberOfStudents;
		s[i].tdays = totalDays;
		s[i].money = 'P';
		s[i].present = 75;

		printf("Student number %d \n", (i + 1));

		printf("Enter the name of the student :: ");
		scanf("%s", s[i].name);

		printf("Enter the roll number :: ");
		scanf(" %d", &s[i].rno);

		printf("Enter the fees of the student 'P' for paid, 'N' for not paid :: ");
		scanf(" %c", &s[i].fees);

		printf("Enter the number of days the student was present :: ");
		scanf("%f", &s[i].days);

		s[i].attend = (s[i].days / s[i].tdays) * 100;

		// Console debugging
		// printf("\n-attended  %f -- totalDays %f\n", s[i].days, totalDays);

		printf("student attendence = %f \n", s[i].attend);
	}
	execute(s);
}
