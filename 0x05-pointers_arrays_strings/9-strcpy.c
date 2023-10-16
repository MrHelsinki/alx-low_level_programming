#include "main.h"

/**
  * _strcpy - func
  * @dest: par 1
  * @dest: par 2
  * Return: pointer
  */
char *_strcpy(char *dest, char *src)
{
	char *destination = dest;

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (destination);
}
