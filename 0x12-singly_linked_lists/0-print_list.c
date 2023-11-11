#include "lists.h"

/**
*print_list - prints elems of a list
*@h: ptr to list
*Return: Number of nodes printed
*/

size_t print_list(const list_t *h)
{
	size_t np = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)");
		printf("[%u] %s\n", h->len, h->str);
		np++;
		h = h->next;
	}

	return (np);
}
