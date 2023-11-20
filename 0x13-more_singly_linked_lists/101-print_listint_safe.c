#include "lists.h"

/**
 * print_listint_safe - func
 * @head: ptr head
 * Return: size_t
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t n = 0;
	long int diff;

	while (head)
	{
		diff = head - head->next;
		n++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (diff > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (n);
}
