#include "lists.h"
#include <stdio.h>

/**
 * free_dlistint - frees a dlistint_t list
 * @head: head node
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head)
	{
		while (head)
		{
			tmp = head;
			head = head->next;
			free(tmp);
		}
	}
}
