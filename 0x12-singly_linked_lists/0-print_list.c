#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	const list_t *current_node = h;
	size_t node_count = 0;

	printf("[%u] %s\n", h->len, (h->str != NULL) ? h->str : "(nil)");
	{
		if (current_node->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", current_node->len, current_node->str);

		node_count++;
	}

	return (node_count);
}

