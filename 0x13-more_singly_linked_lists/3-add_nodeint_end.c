#include "lists.h"

/**
*add_nodeint_end - add node at end
*@head: head ptr
*@n: value
*Return: ptr to end
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp = *head;
	listint_t *new;

	while (tmp->next != NUll)
		tmp = tmp->next;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	tmp->next = new;

	return (new);
}
