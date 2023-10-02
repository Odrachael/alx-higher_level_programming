#include <stdlib.h>
#include "lists.h"

/**
 * check_cycle - Checks if a singly-linked list contains a cycle.
 * @list: A singly-linked list.
 * Return: 0 if no cycle and 1 if there is cycle
 *
 */
int check_cycle(listint_t *list)
{
	listint_t *x, *y;

	if (list == NULL || list-> ==NULL)
		return (0);

	x = list->next;
	y = list->next->next;

	while (x && y && y->next)
	{
		if (x == y)
			return (1);

		x = x->next;
		y = y->next->next;
	}

	return (0);

}
