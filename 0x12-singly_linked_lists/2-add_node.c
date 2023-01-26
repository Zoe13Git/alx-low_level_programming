#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of list
 * @head: Pointer to head
 * @str: string
 * Return: Address of new element or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	char *n_str = strdup(str);

	/*
	 * if (new == NULL)
	 *	return (NULL);
	 */

	new->str = n_str;
	new->len = strlen(n_str);
	new->next = *head;

	*head = new;

	return (new);
}
