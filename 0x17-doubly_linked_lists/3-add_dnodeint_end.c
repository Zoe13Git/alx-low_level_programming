#include "lists.h"
#include <stdio.h>

/**
 * add_dnodeint_end - adds a new node at end of dlistint_t list
 * @head: pointer to head node
 * @n: data for new node
 * Return: pointer to new node or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	if (!head)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		tmp = *head;
		while (tmp->next)
			tmp = tmp->next;
		new->prev = tmp;
		tmp->next = new;
	}
	return (new);
}
