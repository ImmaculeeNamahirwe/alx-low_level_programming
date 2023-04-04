#include "lists.h"

/**
*free_listint - sets a linked list free
*@head: the top of the list
*
*Return: void
*/

void free_listint(listint_t *head)
{
listint_t *temp;

while (head != NULL)
{
temp = head;
head = head->next;
free(temp);
}
}
