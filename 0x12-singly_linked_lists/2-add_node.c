#include "lists.h"

/**
*add_node - add node at head
*@head: first node
*@str: value of the node
*Return: adress of new elem
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	int len;

	while (str[len])
		len++;
	
	newNode = malloc(sizeof(list_t));

	if (!newNode)
		return (NULL);
	
	newNode->str = strdup(str);
	newNode->len = len;
	newNode->next = *head;
	*head = newNode;

	return (*head);


}
