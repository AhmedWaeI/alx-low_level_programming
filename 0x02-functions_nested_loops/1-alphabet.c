#include "main.c"
/**
 *main - A c program for printing
 *Return: 0 (Success)
 */
void print_alphabet(void)
{
	char i;

	for(i = 'a'; i <= 'z'; i++)
        {
		putchar(i);
        }
	putchar('\n');
}
