#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index of listint_t
 * @head: pointer to head node;
 * @index: index of node to delete;
 * Return: 1 if successfull and -1 if failed;
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *tmp2;
	unsigned int i;

	i = 0;
	tmp = *head;
	if (!tmp)
		return (-1);
	if (index == 0)
	{
		*head = (tmp->next) ? (tmp->next) : (NULL);
		free(tmp);
		return (1);
	}
	while (i != (index - 1))
	{
		if (tmp)
			tmp = tmp->next;
		else
			return (-1);
		i++;
	}

	tmp2 = tmp->next;
	if (!tmp2)
		return (-1);
	tmp->next = (tmp2->next) ? tmp2->next : NULL;
	free(tmp2);

	return (1);
}
