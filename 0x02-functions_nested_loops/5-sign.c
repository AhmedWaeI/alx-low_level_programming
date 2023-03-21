#include "main.h"
#include <stdio.h>
/**
 * print_sign - print the sign of given no.
 * @n: given no.
 * Return: 1 (postive) ,-1 (negative) ,0 (zero)
 */
int print_sign(int n)
{
	if (n < 0)
	{
		printf("-");
		return (-1);
	}
	if (n == 0)
	{
		printf("0");
		return (0);
	}
	printf("+");
	return (1);
}
