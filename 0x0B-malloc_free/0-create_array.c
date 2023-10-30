#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  *create_array - func
  *@size: par
  *@c: par
  *Return: ptr
  */
char *create_array(unsigned int size, char c)
{
	char *ptr;

	int i;

	i = 0;

	if (size == 0)
		return (NULL);

	ptr = (char *) malloc(size * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	while (i < size)
	{
		p[i] = c;
		i++;
	}

	p[i] = '\0';

	return (ptr);
}
