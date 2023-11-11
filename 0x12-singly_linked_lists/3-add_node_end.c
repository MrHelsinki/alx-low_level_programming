#include "lists.h"

/**
*add_node_end - func to add node at the end of list
*@head: head node of the list
*@str: string value of said node
*Return: adress of new node
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *tmp = *head;
	int len;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	len = 0;
	while (str[len])
		len++;

	newNode->str = strdup(str);
	newNode->len = len;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (tmp->next)
		tmp = tmp->next;
	tmp->next = newNode;

	return (newNode);
}
