#include "lists.h"

/**
* dlistint_len - returns len of list
* @h: head of said list
* Return: length of list
*/

size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *current;
	size_t len = 0;

	current = h;

	while (current != NULL)
		len++;
	return (len);
}

