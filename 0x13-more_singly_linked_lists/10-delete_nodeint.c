#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given
 *                           index of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @index: The index of the node to be deleted - indices start at 0.
 *
 * Return: On success - 1.
 *         On failure - -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *previous;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	current = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	i = 0;
	while (i < index && current != NULL)
	{
		previous = current;
		current = current->next;
		i++;
	}

	if (i != index || current == NULL)
		return (-1);

	previous->next = current->next;
	free(current);

	return (1);
}
