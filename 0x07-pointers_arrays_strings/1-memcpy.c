#include "main.h"

/**
  *_memcpy - func
  *@dest: par
  *@src: par
  *@n:par
  *Return: ptr
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
