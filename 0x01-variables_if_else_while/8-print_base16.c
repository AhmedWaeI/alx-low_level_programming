#include <stdio.h>
/**
 *main - A c program for printing
 *Return: 0 (Success)
 */
int main(void)
{
	int x;

	char z;

	for (x = 48; x < 58; x++)
	{
		putchar((char)x);
	}
	for (z = 'a'; z <= 'f'; z++)
	       putchar(z);	
	putchar('\n');
	return (0);
}
