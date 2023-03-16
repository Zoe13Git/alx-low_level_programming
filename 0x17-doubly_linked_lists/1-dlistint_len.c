#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - returns no of elements in a dlistint_t list
 * @h: pointer to head
 * Return: size_t number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n_nodes = 0;

	while (h)
	{
		n_nodes++;
		h = h->next;
	}

	return (n_nodes);
}
