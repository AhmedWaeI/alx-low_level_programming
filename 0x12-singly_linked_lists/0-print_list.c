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
size_t print_list(const list_t* h)
{
    size_t i = 0;
   const list_t* current = h;

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
		    printf("[%ld] %s\n", strllen(current->str), current->str ? current->str : "(nil)");
		    i++;
		    current = current->next;
	    }
    }
    return (i);

}
int main(void)
{
    list_t* head;
    list_t* new;
    list_t hello = { "World", 5, NULL };
    size_t n;

    head = &hello;
    new = malloc(sizeof(list_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->str = strdup("Hello");
    new->len = 5;
    new->next = head;
    head = new;
    n = print_list(head);
    printf("-> %lu elements\n", n);

    printf("\n");
    free(new->str);
    new->str = NULL;
    n = print_list(head);
    printf("-> %lu elements\n", n);

    free(new);
    return (0);
}
