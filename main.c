#include <stdio.h>
#include <stdlib.h>
#include "shell.h"

int main(void)
{
	printf("Simple Shell - Welcome!\n");

	/* Initialize the shell */
	init_shell();

	/* Run the shell */
	run_shell();

	return (EXIT_SUCCESS);
}
