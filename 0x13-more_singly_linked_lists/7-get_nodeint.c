#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t list
 * @head: head node
 * @index: index of node starting from 0
 * Return: nth node if found or NULL if not.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;
	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
