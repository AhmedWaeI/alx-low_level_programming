#include <stdio.h>
/**
 *main - A c program for printing
 *Return: 0 (Success)
 */
int main(void)
{
	char x;

	char z;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	for (z = 'A'; z <= 'Z'; z++)
	{
		putchar(z);
	}
	putchar('\n');
	return (0);
}
