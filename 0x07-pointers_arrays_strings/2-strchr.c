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

	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}

	return (NULL);
}