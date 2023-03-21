#include "main.h"
/**
 * _isalpha - check if c is alpha
 * @c: the ascii number of char checked
 * Return: 1 (Success) , 0 (otherwise)
 */
int _isalpha(int c)
{
	char x;

	x = c;
	if (x <= 'z' && x >= 'a')
		return (1);
	if(x <= 'Z' && x>= 'A')
		return (1);
	return (0);
}
