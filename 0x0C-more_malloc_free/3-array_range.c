#include <stdlib.h>
#include "main.h"
/**
 * *array_range - creates an array of integers
 *
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *ptr;
	
	int L = max - min + 1;

	int i;

	int c = 0;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * L);

	for (i = min; i < max; i++)
	{
		ptr[c] = i;
		c++;
		if (min = max)
			break;
	}
	return (ptr);
}
