#include "shell.h"

/**
 * *_strcat - concatenates two strings
 * @dest: destiny string
 * @src: source string
 * Return: new string
 */
char *_strcat(char *dest, char *src)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
	;
	for (b = 0; src[b] != '\0'; b++)
	{
	dest[a] = src[b];
	a++;
        }
	dest[a] = '\0';
	return (dest);
}
