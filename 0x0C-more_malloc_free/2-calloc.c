#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	int i;

	if (nmeb == 0 || size == 0)
	{
		return (NULL)
	}

	ptr = malloc(nmeb * size);

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < nmeb; i++)
	{
		ptr[i] = '0';
	}
	
	return (ptr);
}
