#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

void deleteRecord(struct student s[])
{
	int a = 0;
	printf("Enter the roll number of the student to delete it ");
	scanf("%d", &a);

	// Loop to iterate over the students
	// records to delete the Data
	int number = s[0].n;
	for (int i = 0; i <= s[0].n; i++)
	{
		// Condition to check the current
		// student roll number is same as
		// the user input roll number
		s[i].n = number - 1;
		if (s[i].rno == (a))
		{

			// Update record at ith index
			// with (i + 1)th index
			for (int j = i; j < number; j++)
			{
				strcpy(s[j].name, s[j + 1].name);
				s[j].rno = s[j + 1].rno;
				s[j].fees = s[j + 1].fees;
				s[j].days = s[j + 1].days;
				s[j].attend = s[j + 1].attend;
			}
			printf("Student Record deleted");
		}
	}
}
