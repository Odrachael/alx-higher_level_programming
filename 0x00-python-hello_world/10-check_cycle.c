#include <stdlib.h>
#include "lists.h"

/**
 * check_cycle - Checks if a singly-linked list contains a cycle.
 * @list: A singly-linked list.
 *
 * Return: 0 if no cycle and 1 if there is cycle
 *
 */
int check_cycle(listint_t *list)
{
	listint_t *current, *head;

	if (list == NULL || list->next == NULL)
		return (0);

	current = list->next;
	head = list->next->next;

	while (current && head && head->next)
	{
		if (current == head)
			return (1);

		current = current->next;
		head = head->next->next;
	}

	return (0);
}
