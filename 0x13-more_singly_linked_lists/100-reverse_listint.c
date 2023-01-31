#include "lists.h"
#include <stdio.h>

/**
 * reverse_listint - reverses a listint_t list
 * @head: Pointer to first node
 * Return: pointer to first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = (*head);
		(*head) = next;
	}
	*head = prev;

	return (next);
}
