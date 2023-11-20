#include "lists.h"

/**
*free_listint - free
*@head: ptr head node
*/

void free_listint(listint_t *head)
{
	listint_t *tmp = head;

	while (tmp)
	{
		tmp = tmp->next;
		free(head);
		head = tmp;
	}
}

