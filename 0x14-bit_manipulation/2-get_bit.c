#include "main.h"

/**
 * get_bit - returns the value of a bit at a given
 * index.
 * @n: unsigned long int input.
 * @index: index of the bit.
 *
 * Return: value of the bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int x;

	if (index > 64)
	{
		return (-1);
	}
	x = n >> index;
	if (1 & x)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
