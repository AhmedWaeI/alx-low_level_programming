#include <stdio.h>
/**
 * main - Entry Point
 * Return: 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int l;
	long long int ll;
	float f;

	printf("Size of a char: %zu byte(s)\n", sizeof(c));
	printf("Size of an int: %zu byte(s)\n", sizeof(i));
	printf("Size of a long int: %zu byte(s)\n", sizeof(l));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(ll));
	printf("Size of a float: %zu byte(s)\n", sizeof(f));
	return (0);
}
