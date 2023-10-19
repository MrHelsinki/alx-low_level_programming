#include "main.h"

/**
  * string_toupper - func
  * @str: string
  * Return: pointer
  */

char *string_toupper(char *str)
{
	int i;

	int len;

	len = 0;

	while (str[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
	{
		if (str[i] > 'a' && str[i] < 'z')
			str[i] = str[i] - 32;
	}

	return (str);
}
