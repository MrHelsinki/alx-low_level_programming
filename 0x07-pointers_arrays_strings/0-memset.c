#include "main.h"

/**
  *_memset - func
  *@s: pointer to str
  *@b: char to replace with
  *@n: number of bytes to replace
  *Return: pointer to string
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
