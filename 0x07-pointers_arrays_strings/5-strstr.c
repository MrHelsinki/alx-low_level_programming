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

	char *hay, *need;

	for (i = 0; haystack[i] != '\0'; i++)
	{
	
		hay = &haystack[i];
		need = needle;

		for (y = 0; needle[y] != '\0'; y++)
		{
			if (*hay++ != *need++)
			{
				break;
			}
		}
		if (!*need)
			return (&haystack[i]);
	}

	return (NULL);
}

