#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 *
 * @n: unsigned long int number
 * @index: unsigned int index
 *
 * Return: the  bit at the index or -1 if an error occured
 */


void print_binary(unsigned long int n)
{
	unsigned long int i = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int flag = 0;

	while (i > 0)
	{
		if (n & i)
		{
			flag = 1;
			printf("1");
		}
		else
		{
			if (flag == 1)
			{
				printf("0");
			}
		}
		i >>= 1;
	}
	if (flag == 0)
	{
		printf("0");
	}
	printf("\n");
}
