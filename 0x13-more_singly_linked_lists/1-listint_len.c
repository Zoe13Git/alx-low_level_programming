#include "lists.h"

/**
 * listint_len - returns the length of list
 * @h: head of list
 * Return: list length
 */
size_t listint_len(const listint_t *h)
{
	size_t list_len = 0;

	while (h)
	{
		list_len++;
		h = h->next;
	}

	return (list_len);
}
