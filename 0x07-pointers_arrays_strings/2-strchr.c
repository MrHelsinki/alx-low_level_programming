#include "main.h"
#include <stdio.h>

/**
  *_strchr - func
  *@s: par
  *@c: par
  *Return: char
  */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
return (NULL);
}
