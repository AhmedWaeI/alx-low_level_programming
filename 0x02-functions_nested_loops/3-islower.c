#include "main.h"
#include <stdio.h>
/**
 *islower - prints the alphabets
 *Return: 0 (Success)
 */

int islower(int c)
{
	char x = c;
	
	if (x <= 'z' && x >= 'a')
	{
		return 1;
	}
	return 0;
}
