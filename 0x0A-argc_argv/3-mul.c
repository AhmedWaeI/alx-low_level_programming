#include "main.h"
#include <stdio.h>
/**
 * main - print the multiply of arguments passed to the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;
	int p;

	p=1;
	
	if (argc <= 1)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 0; i < argc; i++)
	{
		p = p * _atoi(argv[i]);
	}
	printf("%d\n", p);
	return (0);
}	
