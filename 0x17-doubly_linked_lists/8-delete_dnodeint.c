#include "lists.h"
/**
 * delete_dnodeint_at_index - dels a node at idx of dlistint_t list
 * @head: pointer to head node
 * @index: idx of node to del starting from 0
 * Return: 1 if success else 0;
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp, *tmp1, *tmp2;
	unsigned int idx = 0;

	if (!(*head))
		return (-1);
	tmp = *head;
	if (index == 0)
	{
		if (tmp->next == NULL)
			(*head) = NULL;
		else
		{
			*head = tmp->next;
			(*head)->prev = NULL;
		}
		free(tmp);
		return (1);
	}
	while (tmp->next)
	{
		if (index == idx++)
		{
			tmp1 = tmp->prev;
			if (!tmp->next)
				tmp1->next = NULL;
			else
			{
				tmp2 = tmp->next;
				tmp1->next = tmp2;
				tmp2->prev = tmp1;
			}
			free(tmp);
			return (1);
		}
		tmp = tmp->next;
	}
	return (-1);
}
