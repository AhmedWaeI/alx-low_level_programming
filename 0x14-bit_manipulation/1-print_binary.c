#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number or 0 if
 * there is one or more chars in b that is not 0 or 1
 * if b is NULL
 */

void print_binary(unsigned long int n) {
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
