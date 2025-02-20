#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

void execute(struct student s[])
{
	int option = 1;

	while (option != 0)
	{
		puts("\n--- --- MENU --- ---\n");
		printf(" \t\tEnter the serial number to select the option \n");
		printf(" \t\t1. To show Eligible candidates \n");
		printf(" \t\t2. To delete the student record \n");
		printf(" \t\t3. To change the eligibility criteria \n");
		printf(" \t\t4. Reset the eligibility criteria \n");
		printf(" \t\t5. Print the list of all the student \n");
		printf(" \t\t6. Output the data in external file \n");
		printf(" \t\tEnter 0 to exit \n");

		printf("Enter option :: ");
		scanf("%d", &option);
		// Switch Statement for choosing
		// the desired option for the user
		switch (option)
		{
		case 1:
			eligibleStudents(s);
			break;

		case 2:
			deleteRecord(s);
			break;

		case 3:
			printf("\nOld Attendance required = %f", s[0].present);
			printf("\n Enter the updated attendence required ::");
			scanf("%f", &s[0].present);
			printf("fees status required was %c :: ", 'P');
			printf("Enter the new fees status 'P' for paid 'N' for not paid and 'B' for both :: ");
			fflush(stdin);
			scanf("%c", &s[0].money);
			printf("Eligibility Criteria updated \n");
			break;

		case 4:
			s[0].present = 75.00;
			s[0].money = 'P';
			printf("Eligibility creitria reset \n");
			break;

		case 5:
			printfunction(s);
			break;

		case 6:
			printf("The file data is stored into file. Server is now active\n");
			printf("Run the another terminal to see the data stored into another file - 'data.txt'");
			freopen("output.txt", "w", stdout);
			printfunction(s);
			fclose(stdout);
			break;

		case 0:
			return;

		default:
			printf("Enter number only from 0-4 \n");
			break;
		}
	}
}
