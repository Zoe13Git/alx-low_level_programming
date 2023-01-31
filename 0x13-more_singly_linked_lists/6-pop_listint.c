#include "lists.h"

/**
 * pop_listint - deletes the headnode a listint_t list
 * @head: pointer to head node
 * Return: date of head or 0 if emptry
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	tmp = *head;
	if (!tmp)
		return (0);
	n = tmp->n;
	if (!tmp->next)
	{
		free(*head);
	}
	else
	{
		tmp = tmp->next;
		free(*head);
		*head = tmp;
		/* free(tmp); */
	}
	return (n);
}
