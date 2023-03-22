#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts new node at given pos
 * @h: pointer to head node
 * @idx: position to from 0 to enter new node
 * @n: data of new node
 * Return: address or new node or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp;
	unsigned int index = 0;
	size_t l_len = 0;

	if (!h)
		return (NULL);

	tmp = *h;
	while (tmp)
	{
		tmp = tmp->next;
		l_len++;
	}

	if (idx == 0)
		return (add_dnodeint(h, n));
	else if (idx == l_len)
		return (add_dnodeint_end(h, n));
	else if (idx > l_len)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;

	tmp = *h;
	while (tmp->next)
	{
		if (idx == ++index)
		{
			new->prev = tmp;
			new->next = tmp->next;
			tmp->next = new;
			break;
		}
		tmp = tmp->next;
	}
	return (new);
}
