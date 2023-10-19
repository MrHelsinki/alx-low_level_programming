#include "main.h"

/**
  *_stncpy - func to copy str 2 to str 1 adress
  *@dest: dest adress parameter
  *@src: src adress parameter
  *@n: num of bytes to cpy
  *Return: adress of destination
  */

char *_strncpy(char *dest, char *src, int n)
{
	int i, y;

	i = 0;

	while (*src)
		i++;

	for (y = 0; y < n; y++)
		dest[y] = src[y];

	dest[y] = '\0';

	return (dest);
}
