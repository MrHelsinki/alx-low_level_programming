#include "main.h"

/**
  *leet - func
  *@str: par
  *Return: str ptr
  */

char *leet(char *str)
{
	int i;

	int j;

	char l[] = "oOlLeEaAtT";

	char e[] = "0011334477";

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (l[j] != '\0')
		{
			if (str[i] == l[j])
				str[i] = e[j];
			j++;
		}
		i++;
	}

	return (str);
}
