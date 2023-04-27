#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>
/**
 * strllen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
unsigned long int strllen(const char *s)
{
	unsigned long int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		if (current->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
			i++;
			current = current->next;
		}
		else
		{
			printf("[%ld] %s\n", strllen(current->str), current->str);
			ui++;
			current = current->next;
		}
	}
	return (i);
}
