#include "lists.h"


/**
 *listint_len - Returns the number of items
 *in a linked listint_t list
 *@h: A sign pointing to the list's top
 *
 *
 *Return: the number of items in the listint_t list
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}


