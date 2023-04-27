#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	if (!head || !new)
	{
		return (NULL):
	}
	if (str)
	{
		new->str = strdup(str);
		new->len = _strlen(str);
	}
	new->next = *head;
	*head = new;
	return(new);
}
