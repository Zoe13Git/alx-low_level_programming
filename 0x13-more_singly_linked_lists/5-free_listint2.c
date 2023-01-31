#include "lists.h"

/**
 * free_listint2 - frees a listin_t list
 * @head: Pointer to list
 * Return: void;
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp, *tmp2;

	if (*head == NULL)
		return;
	
	tmp2 = *head;
	while (tmp2)
	{
		tmp = tmp2;
		tmp2 = tmp2->next;
		free(tmp);
	}
	free(tmp2);
	head = NULL;
}
