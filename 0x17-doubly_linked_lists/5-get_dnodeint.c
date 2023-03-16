#include "lists.h"
#include <stdio.h>

/**
 * get_dnodeint_at_index - returns nth node of a dlistint_t linked list
 * @head: head node
 * @index: position of node from 0
 * Return: dlistint_t else NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int idx = 0;

	while (head)
	{
		if (idx == index)
			return (head);
		head = head->next;
		idx++;
	}

	return (NULL);
}
