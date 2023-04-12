#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 *
 * Return: pointer to the new string created (Success), or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
	char *p;

	int i;

	int x;

	int m;

	int y;
	
	int c;

	c = 0;

	for (x = 0; s1[i] != '\0'; x++)
	{
	}
	for (i = 0; s2[i] != '\0'; i++)
        {
        }
	p = malloc(sizeof(char) * (i + x + 1));
	if (p == NULL)
		return (NULL);
	for (m = 0; m < x; m++)
	{
		p[m] = s1[m];
	}
	for (y = m; x < x + i; y++)
        {
                p[x] = s2[c];
		c = c + 1;
	}
	p[x + i] = '\0'
	return (p);
}
