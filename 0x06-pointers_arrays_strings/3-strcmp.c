#include "main.h"

/**
  * _strcmp - comapre 2 strings
  *@s1: string 1
  *@s2: string 2
  *Return: 0 if equal or s1 - s2 if not equal
  */

int _strcmp(char *s1, char *s2)
{
	int i;

	int s1_len;

	int s2_len;

	int len;

	s1_len = 0;
	s2_len = 0;

	while (s1[s1_len] != '\0')
		s1_len++;

	while (s2[s2_len] != '\0')
		s2_len++;

	if (s1_len > s2_len)
	{
		len = s1_len;
	} else
	{
		len = s2_len;
	}

	for (i = 0; i < len; i++)
	{
		if (s1[i] < s2[i] || s1[i] > s2[i])
			return (s1[i] - s2[i]);
	}

	return (0);
}
