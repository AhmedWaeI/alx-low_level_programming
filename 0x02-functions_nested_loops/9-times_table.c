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
			printf("%d,  ", x);
		}
		putchar('\n');
	}
}	
