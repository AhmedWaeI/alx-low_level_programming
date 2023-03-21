#include "main.h"
#include <stdio.h>
/**
 * times_table - prints the time table
 */
void times_table(void)
{
	int i;
	int j;
	int x;
	int z;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			x = i * j;
			z = (j + 1) * i;
			if (j == 9)
			{
				 printf("%d", x);
			}
			else
			{
				if (z > 9)
					printf("%d, ", x);
				else
					printf("%d,  ", x);
			}
		}
		putchar('\n');
	}
}
