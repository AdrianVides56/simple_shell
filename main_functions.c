#include "shell.h"

/**
 * _getline - prints the prompt and wait for instructions
 * @val_issaty: value of issaty function
 * @myenvp: enviroment variable envp
 * Return: the read line
 */
char *_getline(size_t val_issaty, char **myenvp)
{
	size_t bufsize = 0;
	int getln = 0, aux = 0;
	char *line = NULL, *tmp;

	if (val_issaty == 1)
	{
		write(STDOUT_FILENO, "\033[1;32mRASH@SHELL$ ", 19);
		write(STDOUT_FILENO, "\033[0m]", 4);
	}
	getln = getline(&line, &bufsize, stdin);
	if (getln == EOF)
	{
		free(line);
		_putchar(10);
		exit(EXIT_SUCCESS);
	}
	if (_strcmp(line, "exit\n") == 0)
	{
		free(line);
		exit(EXIT_SUCCESS);
	}
	if (_strcmp(line, "env\n") == 0)
	{
		for (aux = 0; myenvp[aux] != NULL; aux++)
		{
			tmp = malloc(_strlen(myenvp[aux]));
			tmp = _strcpy(tmp, myenvp[aux]);
			write(STDOUT_FILENO, tmp, (_strlen(tmp)));
			_putchar(10);
		}
		free(tmp);
	}

	return (line);
}

/**
 * *_getenv - gets the enviromental variables
 * @myEnvp: pointer to envp in main function
 * @path: string "PATH"
 * Return: the PATH
 */
char *_getenv(char **myEnvp, char *path)
{
	char *envpath;
	int count = 0;

	while (myEnvp[count] != NULL)
	{
		envpath = _strstr(myEnvp[count], path);
		if (envpath == NULL)
			count++;
		else
			return (envpath);
	}
	return (NULL);
}

/**
 * *_strstr - finds the coincidence needle in string haystack
 * @haystack: String to read
 * @needle: string to find in haystack
 * Return: coincident string found int haystack
 */
char *_strstr(char *haystack, char *needle)
{
	char *c;

	while (haystack)
	{
		while (*needle == *haystack)
			haystack++, needle++;
		if (*needle == '\0')
		{
			haystack++;
			c = haystack;
			return (c);
		}
		haystack++;
	}
	return (NULL);
}
/**
 * _execve - executes a file given a path
 * @path: path to follow
 * @command: command to execute
 * @flags: flags of the command
 */
void _execve(char *path, char *command, char **flags)
{
	char *token, *token2[1024];
	char *tmp = malloc(_strlen(path)), *tmp2;
	const char delim[2] = ":";
	int i = 0, check = 0;

	if (tmp == NULL)
		errors(126);
	tmp = _strcpy(tmp, path);
	token = strtok(tmp, delim);
	while (token != NULL)
	{
		token2[i] = token;
		token = strtok(NULL, delim);
		i++;
	}
	free(tmp);

	for (i = 0; token2[i] != NULL; i++)
	{
		tmp2 = malloc(_strlen(token2[i]));
		check = 0;
		tmp2 = _strcpy(tmp2, token2[i]);
		_strcat(tmp2, "/");
		_strcat(tmp2, command);
		check = execve(tmp2, flags, NULL);
		if (check == -1)
			continue;
	}
	free(tmp2);
	if (check == -1)
		errors(127);
}
