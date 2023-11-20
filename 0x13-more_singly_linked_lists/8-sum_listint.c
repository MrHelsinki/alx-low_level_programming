#include "lists.h"

/**
 * sum_listint - func
 * @head: ehad ptr
 * Return: Int
 **/

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
