#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at give position
 * @head: pointer to first node
 * @idx: index of list for new node
 * @n: value of new node
 * Return: address of new node, or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *tmp;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;

	i = 0;
	tmp = *head;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		while (i != (idx - 1))
		{
			if (tmp->next)
				tmp = tmp->next;
			else
				return (NULL);
			i++;
		}
		if (tmp->next)
		{
			new_node->next = tmp->next;
			tmp->next = new_node;
		}
		else
		{
			new_node->next = NULL;
			tmp->next = new_node;
		}
	}
	return (new_node);
}
