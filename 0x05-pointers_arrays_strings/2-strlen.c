#include "main.h"

/**
  * _strlen - func
  * @s: par
  * Return: int
  */
int _strlen(char *s)
{
	int i, len;

	len = 0;
	i = 0;

	for (;;)
	{
		if (*s[i] != '\0')
		{
			len++;
		} else
		{
			break;
		}

		i++;
	}
}
