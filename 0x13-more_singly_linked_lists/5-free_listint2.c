#include "lists.h"

/**
 * free_listint2 - free list
 * @head: head ptr
 **/

void free_listint2(listint_t **head)
{
	listint_t *tmp;
	if (head == NULL)
		return;
	while (*head != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
}
