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

	int i, len;

	i = 0;
	len = 0;

	tmp = str;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;


	ptr = (char *) malloc((len + 2) * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	while (*tmp)
	{
		ptr[i] = tmp[i];
		i++;
	}

	ptr[i] = '\0';
	ptr[i + 1] = '\n';

	return (ptr);
}
