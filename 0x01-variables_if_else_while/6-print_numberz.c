#include <stdio.h>
/**
 *main - A c program for printing
 *Return: 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
		putchar((char)x);
	}
	putchar('\n');
	return (0);
}
