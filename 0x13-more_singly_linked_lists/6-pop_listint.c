#include "lists.h"

/**
*pop_listint - removes the linked list's head node
*@head: the list's head
*
*Return: the data of a node deleted
*/

int pop_listint(listint_t **head)
{
listint_t *popped;
int content;

if (*head == NULL)
return (0);

popped = *head;
content = popped->n;
free(popped);

*head = (*head)->next;
return (content);

}
