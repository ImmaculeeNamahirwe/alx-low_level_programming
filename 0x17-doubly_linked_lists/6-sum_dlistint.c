#include "lists.h"

/**
 *  sum_dlistint - returns the sum of all
 * a dlistint t linked list's data (n).
 * @head: double pointer to the list's top
 *
 * Return: Return 0 if the list is empty.
 */

int sum_dlistint(dlistint_t *head)
{

	int sum = 0;
	dlistint_t *i;

	for (i = head; i != NULL; i = i->next)
	{
		sum += i->n;
	}

	return (sum);
}
