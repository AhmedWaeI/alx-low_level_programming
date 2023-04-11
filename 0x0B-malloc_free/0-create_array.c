#include <stdlib.h>

/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array to create
 * @c: char to initialize the array c
 *
 * Return: pointer to the array (Success), NULL (Error)
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *a;

	a = malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);
	if (a == NULL)
		return (0);
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	a[i + 1] = '\0';

	return (a);
}
