#include "lists.h"
#include <stdio.h>
/**
 * add_dnodeint - add new node at the begginning of dlistint_t list
 * @head: pointer to first node
 * @n: value for new node
 * Return: pointer to new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return NULL;

	new->n = n;
	new->prev = NULL;
	if (head)
		new->next = *head;
	else
		new->next = NULL;

	*head = new;

	return (new);
}
