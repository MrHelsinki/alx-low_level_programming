#include "lists.h"

/**
*print_dlistint - prints all elems of a list
*@h: head of the list
*Return: number of elems in the list
*/

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t count = 0;

	current = h;

	while (current->next != NULL)
	{
		printf("%d\n", current->n);
		current = h->next;
		count++;
	}

	return (count);
}
