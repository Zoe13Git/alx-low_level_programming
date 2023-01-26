#include <stdio.h>
#include "lists.h"

/**
 * list_len - length of linked list
 * @h: header
 * Return: length of linked list;
 */
size_t list_len(const list_t *h)
{
	size_t l_len = 0;

	while (h)
	{
		l_len++;
		h = h->next;
	}

	return (l_len);
}
