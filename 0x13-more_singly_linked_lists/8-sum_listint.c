#include "lists.h"

/**
 * sum_listint -Calculates the sum of all the date (n) of a listint_t list.
 * @head: A pointer to the head of the listint_t list.
 *
 *
 * Return: If the list is empty - 0. Otherwise - the sum of all the data.
 */
int sum_listint(listint_t *head)
{
	if (head == NULL)
	{
		return (0);
	}

	return (head->n + sum_listint(head->next));
}
