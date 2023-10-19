#include "main.h"

/**
  *leet - func
  *@str: par
  *Return: str ptr
  */

char *leet(char *str)
{
	int i, j;

	char letters[] = "aAeEoOtTlL";

	char numbers[] = "4433007711";

	for (i = 0; str[i] != '0'; i++)
	{
		for (j = 0; j < 9; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = numbers[j];
				break;
			}
		}
	}

	return (str);
}
