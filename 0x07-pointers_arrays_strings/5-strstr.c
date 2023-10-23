#include "main.h"
#include <stdio.h>

/**
  *_strstr - func
  *@haystack: par
  *@needle: par
  *Return: return
  */
char *_strstr(char *haystack, char *needle)
{

	int i, y;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (y = 0; needle[y] != '\0'; y++)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
			return (&haystack[i]);
	}

	return (NULL);
}

