#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - del first elem and return value
 * @head: head ptr
 * Return: int
 **/

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int value;

	if (*head == NULL)
		return (0);

	tmp = *head;
	*head = tmp->next;
	value = tmp->n;
	free(tmp);
	return (value);
}
