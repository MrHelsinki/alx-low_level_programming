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

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;


	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = new;

	return (new);
}
