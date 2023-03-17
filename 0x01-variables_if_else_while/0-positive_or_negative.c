#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - A c program declaring +ve or -ve or zero
 *Return: 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("is negative\n");
	if (n == 0)
		printf("is zero\n");
	if (n > 0)
		printf("is positive\n");
	return (0);
}
