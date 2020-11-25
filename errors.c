#include "shell.h"

/**
 * errors - check for errors
 * @errornum: number of error
 */
void errors(int errornum)
{
<<<<<<< HEAD
	char *errormsg = "Error\n", *notfound = "Command not found\n";
	char __attribute__((unused)) *newline = "\n";
=======
        char *errormsg = "Error\n", *notfound = "Command not found\n";
        char __attribute__((unused)) *newline = "\n";
>>>>>>> 84ad7be5a6db2e305047186f137a9c28139486a3

        if (errornum == -1)
        {
                write(STDOUT_FILENO, errormsg, _strlen(errormsg));
                exit(EXIT_SUCCESS);
        }
        else if (errornum == 0)
                exit(EXIT_SUCCESS);

<<<<<<< HEAD
	else if (errornum == 127)
		write(STDOUT_FILENO, notfound, _strlen(notfound));
	else if (errornum == 126)
		write(STDOUT_FILENO, "Failed Malloc", _strlen("Failed malloc"));
=======
        else if (errornum == 127)
                write(STDOUT_FILENO, notfound, _strlen(notfound));
        else if (errornum == 126)
                write(STDOUT_FILENO, "Failed Malloc", _strlen("Failed malloc"));
>>>>>>> 84ad7be5a6db2e305047186f137a9c28139486a3
}
