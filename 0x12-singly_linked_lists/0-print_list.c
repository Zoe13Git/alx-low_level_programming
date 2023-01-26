#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints all the elemen soa linked list
 * @h: pointer to head
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t num_nodes = 0;
	const list_t *list = h;

	/*
	 *if (!h)
	 *	return (-1);
	 */

	while (list)
	{
		if (list->str)
			printf("[%d] %s\n", list->len, list->str);
		else
			printf("[0] (nil)\n");
		list = list->next;
		num_nodes++;
	}

	return (num_nodes);
}
