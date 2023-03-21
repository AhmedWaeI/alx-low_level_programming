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

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			x = i * j;
			if (j == 9)
			{
				 printf("%d", x);
			}
			else
			{
				if((i * (j + 1) > 9)
				{
					printf("%d, ", x);
				}
				else
				{
					printf("%d,  ", x);
				}
			}
		}
		putchar('\n');
	}
}	
