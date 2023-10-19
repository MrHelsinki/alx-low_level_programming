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
	int i;

	i = 0;

	while(i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
