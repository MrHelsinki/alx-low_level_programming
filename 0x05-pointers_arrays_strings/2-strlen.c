#include "main.h"

/**
  * _strlen - func
  * @s: par
  * Return: int
  */
int _strlen(char *s)
{
	int len;

	len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
