nclude "shell.h"

void init_shell() {
	    /* Any initialization tasks for your shell can go here */
}

void execute_command(char *command) {
	    command[strcspn(command, "\n")] = '\0'; /* Remove newline character from the command */

	        if (strcmp(command, "") == 0) {
			        printf("\n");
				        return; /* Ignore empty command lines */
					    }

		    printf("($) %s\n", command); /* Display entered command */

		        /* Check for the built-in command 'exit' to terminate the shell */
		        if (strcmp(command, "exit") == 0) {
				        printf("Exiting the shell...\n");
					        exit(EXIT_SUCCESS);
						    }

			    pid_t pid = fork();

			        if (pid < 0) {
					        perror("Fork failed");
						        exit(EXIT_FAILURE);
							    } else if (pid == 0) {
								            char *args[] = {command, NULL};
									            if (execvp(command, args) == -1) {
											                perror("Command execution error");
													            exit(EXIT_FAILURE);
														            }
								} 
	else 
	{							
	wait(NULL);
	}
}

void run_shell()
{
	char command[1024];

	while (1)
	{
	printf("($) ");
	if (fgets(command, sizeof(command), stdin) == NULL)
	{
	printf("\n");
	exit(EXIT_SUCCESS); /* Exit on Ctrl+D (EOF) */
	}

	execute_command(command);
	}
}
