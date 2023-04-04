#include "lists.h"

/**
 * sum_listint - provides the data's total as a whole (n) of
 * a linked list.
 * @head: list's head.
 *
 * Return: total of all data (n).
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
