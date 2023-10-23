#include "main.h"

/**
  *_strspn - func
  *@s: par
  *@accept: par
  *Return: int
  */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, f, k;

	f = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		k = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				f++;
				k = 1;
			}
		}
		if (k == 0)
		{
			return (f);
		}
	}

	return (0);
}
