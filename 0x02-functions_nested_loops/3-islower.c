#include "main.h"
#include <stdio.h>
/**
 * _islower - check for lower case
 * @c: is the ascii code for char
 * Return: 1 (Success) , 0 (otherwise)
 */

int _islower(int c)
{
	char x;

	x = c;
	if (x <= 'z'&& x >= 'a')
	{
		return (1);
	}
	return (0);
}
