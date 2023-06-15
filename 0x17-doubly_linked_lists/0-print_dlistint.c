#include "lists.h"

/**
 * print_dlistint - dlistint t list that prints every element in the list.
 * @h: The dlistint t list's head
 *
 * Return: There are how many nodes in the list?
 **/

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;
	const dlistint_t *tmp = h;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		i++;
	}
	return (i);
}
