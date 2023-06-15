#include "lists.h"

/**
 * add_dnodeint - prints a new node at the top of a dlistint_t list.
 * @head: double pointer to the list's top
 * @n: iformation to be added
 *
 * Return: The new element's address, or NULL if it failed.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	if (*head != NULL)
		(*head)->prev = new_node;
	*head = new_node;
	return (new_node);
}
