#include <stdio.h>
/**
 *main - A c program for printing
 *Return: 0 (Success)
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x == 'q' || x == 'e')
			continue;
		putchar(x);
	}
	putchar('\n');
	return (0);
}
