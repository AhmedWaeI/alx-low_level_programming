#include <stdlib.h>

/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *p;

	int i;

	int x;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++);
	p = malloc(sizeof(char) * (i + 1));
	for (x = 0; x < i; x++)
	{
		p[x] = str[x];
	}
	return (p);
}
