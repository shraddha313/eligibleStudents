#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

void eligibleStudents(struct student s[])
{
	printf("\n--- --- ELIGIBLE STUDENTS --- ---\n");
	printf("Qualified student are = \n");

	// Iterate over the list
	// of the students records
	for (int i = 0; i < s[0].n; i++)
	{
		// Check for the eligibility
		// of the student
		if (s[i].fees == 'P' || 'B' == 'P')
		{
			if (s[i].attend >= s[0].present)
			{
				printf("Student name = %s \n", s[i].name);
				printf("Student roll no. = %d \n", s[i].rno);
				printf("Student fees = %c \n", s[i].fees);
				printf("Student attendence = %f \n", s[i].attend);
			}
		}
	}
}
