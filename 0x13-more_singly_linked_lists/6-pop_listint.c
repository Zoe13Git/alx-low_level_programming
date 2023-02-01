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

	if (!(*head))
		return (0);

	tmp = *head;
	n = (*head)->n;
		
	tmp = tmp->next;
	free(*head);
	*head = tmp;

	return (n);
}
