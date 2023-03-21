#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - the function
 * Return: 0
 */
void jack_bauer(void)
{
	int i;

	int h;
	
	int m;

	h=0;
	
	for (i = 0; i < 1440; i++)
	{
		m = i % 60;
		if (i % 60 == 0)
		{
			h = h + 1;
			m = 0;
		}
		if (m < 10)
		{
			if (h < 10)
			{
				printf("0%d:0%d", h, m);
			}
			else
			{
				printf("%d:0%d", h, m);
			}
		}
		if (m >= 10)
		{
			if (h < 10)
			{
				printf("0%d:%d", h, m);
			}
			else
			{
				printf("%d:%d", h, m);
			}
		}
		putchar('\n');
	}
}
