#include "main.h"
#include <stdio.h>

/**
 * flip_bits - flip bits to convert one number to another number
 * @n: first number
 * @m: second number to convert to
 * Return: number of bits that was needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
<<<<<<< HEAD
	unsigned int x;
	int i = 63;
=======
	unsigned int x = 0;
	int i =63;
>>>>>>> 1e85ad9f82cd55d35218bb70fc360ef365eeacd4

	while (i >= 0)
	{
		if (((n >> i) & 1) != ((m >> i) & 1))
		{
			x = x + 1;
		}
		i--;
	}
	return (x);
}

