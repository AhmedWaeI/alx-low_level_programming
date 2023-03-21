#include "main.h"
#include <stdio.h>
/**
 *print_alphabet - prints the alphabets
 *Return: 0 (Success)
 */

int _islower(int c)
{
	char x;

	x = c;
	
	if (x <= 'z' && x >= 'a')
	{
		return (1);
	}
	return (0);
}
