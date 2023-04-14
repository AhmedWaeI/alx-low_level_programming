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
int *array_range(int min, int max);
{
	int *ptr;
	
	int L = max - min + 1;

	int i;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * L);

	for (i = 0; i < size; i++)
	{
		p[i] = min;
		min++;
		if (min = max)
			break;
	}
	return (ptr);
}
