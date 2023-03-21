#include "main.h"
#include <stdio.h>
/**
 *print_alphabet - prints the alphabets
 *Return: 0 (Success)
 */


void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
