#include "lists.h"

/**
 * add_nodeint - adds a new node at begining of listint_t
 * @head: pointer to list
 * @n: element
 * Return: pointer to new element or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

