#include "lists.h"
/**
 * sum_listint - sums all the data (n) of a listint_t
 * @head: head node
 * Return: sum of nodes or 0 if empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
