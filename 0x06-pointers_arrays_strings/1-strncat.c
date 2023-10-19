#include "main.h"

/**
  *_strncat - func to concatenate string 2 to string 1 by n bytes at most
  *@dest: string 1
  *@src: string 2
  *@n: number of bytes to concatenate
  *Return: pointer to string 1
  */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int y;

	i = 0;
	while (dest[i] != '0')
		i++;

	for (y = 0; y <= n; y++)
	{
		dest[i] = src[y];
	}

	return (dest);
}
