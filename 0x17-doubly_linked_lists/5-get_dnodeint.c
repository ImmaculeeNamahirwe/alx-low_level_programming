#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: double pointer to the list's top
 * @index: the node's return index
 *
 * Return: Return NULL if the node is nonexistent.
 *         where index denotes the node's index, starting at 0.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	current = head;
	i = 0;
	while (current != NULL)
	{
		if (i == index)
			return (current);
		current = current->next;
		i++;
	}
	return (NULL);
}
