#include "lists.h"

/**
*print_listint - func
*@h: head
*Return: size_t
*/

size_t print_listint(const listint_t *h)
{
	size_t size = 0;
	const listint_t *tmp = h;
	
	while (tmp->n != NULL)
	{
		printf("%d", tmp->n);
		tmp = tmp->next;
		size++;
	}

	return (size);

}
