#include "lists.h"

/**
*add_nodeint - adds a new node at the start of the list
*@head: list
*@n: value
*Return: ptr to new node
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	if (*head == NULL)
	{
		*head = new;
		return (head);
	}

	*head = new;

	return (*head);

}
