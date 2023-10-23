#include "main.h"
#include <stdio.h>

/**
  *_strpbrk - func
  *@s: par
  *@accept: par
  *Return: ptr
  */

char *_strpbrk(char *s, char *accept)
{
	int i, y;

	char *ptr;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[i] == accept[y])
			{
				ptr = &s[i];
				return (ptr);
			}
		}
	}

	return (NULL);
}
