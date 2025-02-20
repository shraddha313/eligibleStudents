#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <signal.h>
#include "header.h"

static void alarmHandler(int signo);

// Driver code
int main()
{

	int processID = fork();
	if (processID > 0)
	{
		wait(NULL); // PARENT WILL WAIT TILL THE CHILD ENDS
		printf("parent process with ID: %d \n", getpid());
	}

	else if (processID == 0)
	{
		printf("\n--- --- --- --- ---\n");
		printf("new child process with ID: %d\n", getpid());
		printf("parent process has this ID: %d", getppid());
		printf("\n--- --- --- --- ---\n");
	}

	else
	{
		printf("\n--- --- --- --- ---\n");
		printf("child can't be created due to negative fork");
		printf("\n--- --- --- --- ---\n");
	}

	// adding the Alarams and signals

	alarm(10);

	signal(SIGALRM, alarmHandler);

	printf("Welcome to Student database registration \n");

	printf("Enter 0 to exit \n");
	printf("Enter 1 to add student record \n");
	printf("Enter 2 to start the client \n");
	printf("Enter 3 to host the server \n");
	int option;
	scanf("%d", &option);

	struct student s[50];

	// Switch Statements
	switch (option)
	{
	case 0:
		exit(0);

	case 1:
		add(s);
		break;

	case 2:
		client();
		break;
	
	case 3:
		server();
		break;

	default:
		printf("\nOnly enter 0 or 1");
	}
	return 0;
}

static void alarmHandler(int signo) {
	printf("\n--- --- --- --- ---\n");
	printf("Time warning :: The program took longer than 10 seconds...");
	printf("\n--- --- --- --- ---\n");
}
