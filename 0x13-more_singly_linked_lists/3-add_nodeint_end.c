#include "lists.h"
/**
 * add_nodeint_end - adds a new node at end of listint_T
 * @head: pointer to list
 * @n: interger
 * Return: address of new element or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *tmp;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	tmp = *head;
	if (!tmp)
	{
		*head = new_node;
	}
	else
	{
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		tmp->next = new_node;
	}

	return (new_node);
}
