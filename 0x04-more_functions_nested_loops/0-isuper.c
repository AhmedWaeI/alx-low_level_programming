#include "main.h"

/**
 * _isupper - check for uppercase character.
 *
 * @c: character
 * Return: 1 if c is uppercase and 0 otherwise.
 */
int _isupper(int c)
{
	if (c <= 90 && c >= 65)
	{
		return (1);
	}
	return (0);
}
