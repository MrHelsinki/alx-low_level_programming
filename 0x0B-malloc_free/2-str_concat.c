#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  *str_concat - func
  *@s1: par
  *@s2: par
  *Return: char *
  */

int *_strlen(char *str)
{
	int *ptr;

	int len;

	len = 0;

	if (str != NULL)
	{
		while (str[len])
		{
			len ++;
		}
	} else
	{
		return (NULL);
	}

	ptr = &len;

	return (ptr);
}

char *str_concat(char *s1, char *s2)
{
	int *len1, *len2;
		
	int i, y;

	char *ptr;

	len1 = 0;
	len2 = 0;
	i = 0;
	y = 0;

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	ptr = malloc((*len1 + *len2 + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	if (s1 != NULL)
	{
		while (s1[i])
		{
			ptr[i] = s1[i];
			i++;
		}
	}
	if (s2 != NULL)
	{
		while (s2[y])
		{
			ptr[i] = s2[y];
			i++;
			y++;
		}
	}
	ptr[i] = '\0';
	return (ptr);
}

