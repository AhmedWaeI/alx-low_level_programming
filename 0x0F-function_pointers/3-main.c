#include "3-calc.h"

/**
 * main - program that perfroms simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int args, char *argv[])
{
	int x, y;

	int (*function)(int,int);

	char op;

	if (args != 4)
	{
		printf("Error\n");
		exit(98);
	}

	x = atoi(argv[1]);

	y = atoi(argv[3]);

	function = get_op_func(argv[2]);

	if (!function)
	{
		printf("Error\n");
		exit(99);
	}
	op = *argv[2];

	if ((op == '%' || op == '/') && y == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", function(x, y));

	return (0);
}
