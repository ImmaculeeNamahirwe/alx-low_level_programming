#include "lists.h"

/**
 *add_nodeint - creates a new node at the start
 *of a listint_t list
 *@head: a pointing tool to the head of the listint_t list
 *@n: the number that the new node must have
 *
 *Return: NULL if function fails
 *Or address of element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
