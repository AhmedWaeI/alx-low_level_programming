#include "main.h"
#include <stdio.h>
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * followed by a new line
 */

void more_numbers(void)
{
	int i;

	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 48; j < 63; j++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
