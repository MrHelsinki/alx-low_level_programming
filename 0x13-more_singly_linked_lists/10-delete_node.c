#include "lists.h"

/**
 * delete_nodeint_at_index - func
 * @head: head ptr
 * @index: index
 * Return: int
 **/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *workingNode, 
	listint_t *next;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	current = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (workingNode->next == NULL)
			return (-1);
		workingNode = workingNode->next;
	}
	next = workingNode->next;
	workingNode->next = next->next;
	free(next);
	return (1);
}
