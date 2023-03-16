#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - prints all elements of a dlinstint_t list
 * @h: head pointer
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n_nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		n_nodes++;
		h = h->next;
	}
	return (n_nodes);
}
