#include "lists.h"


/**
*list_len - returns list lenght
*@h: list
*Return: length of h
*/

size_t list_len(const list_t *h)
{
	size_t len;

	len = 0;

	if (!h)
		return (0);

	while (h)
	{
		len++;
		if (h->next == NULL)
			break;
		h = h->next;
	}

	return (len);
}
