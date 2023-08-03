#include "main.h"

/**
 * print_binary - prints binary of int
 *
 * @n: unsigned long in to be converted
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
