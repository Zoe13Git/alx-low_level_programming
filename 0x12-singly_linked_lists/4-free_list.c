#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t
 * @head: pointer to head of list
 * Return: void;
 */
void free_list(list_t *head)
{
	list_t *tmp1;

	while(head)
	{
		tmp1 = head;
		free(tmp1->str);
		head = head->next;
		free(tmp1);
	}
}
