#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
  *_strdup - func
  *@str: par
  *Return: char *
  */

char *_strdup(char *str)
{

	char *ptr;

	char *tmp;

	int i;

	i = 0;

	tmp = str;

	if (str == NULL)
		return (NULL);

	ptr = (char *) malloc(strlen(str) * sizeof(char));

	while (*tmp)
	{
		ptr[i] = tmp[i];
		i++;
	}

	ptr[i] = '\0';

	return (ptr);
}
