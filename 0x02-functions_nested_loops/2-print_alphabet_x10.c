#include "main.h"
#include <stdio.h>
/**
 *print_alphabet_x10 - prints the alphabets
 *Return: 0 (Success)
 */
void print_alphabet_x10(void)
{
	int j;

	for (j = 0; j<10; j++)
	{
		char c;

		for(c = 'a'; c <= 'z'; c++)
		{
			putchar(c);
		}
		putchar('\n');
	}
}
