#include "lists.h"

/**
*listint_len - func
*@h: list
*Return: size_t
*/

size_t listint_len(const listint_t *h)
{

	size_t len = 0;
	const listint_t *tmp = h;
	
	while (tmp != NULL)
	{
		len++;
		tmp = tmp->next;
	}

	return (len);
}


