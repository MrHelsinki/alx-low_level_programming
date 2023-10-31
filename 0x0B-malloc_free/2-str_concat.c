#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  *str_concat - func
  *@s1: par
  *@s2: par
  *Return: char *
  */

char *str_concat(char *s1, char *s2)
{
	int len1, len2, i, y;

	char *ptr;

	len1 = 0;
	len2 = 0;
	i = 0;
	y = 0;
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;
	ptr = malloc((len1 + len2 + 1) * sizeof(char));
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

