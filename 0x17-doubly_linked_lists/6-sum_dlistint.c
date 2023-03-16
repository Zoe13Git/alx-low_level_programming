#include "lists.h"
#include <stdio.h>

/**
 * sum_dlistint - returns sum of all the data(n) of a dlistint_t linked list
 * @head: head node
 * Return: sum of data(n)
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
