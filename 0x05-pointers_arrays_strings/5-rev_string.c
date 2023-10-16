#include "main.h"

/**
  * rev_string - func
  * @s: par
  */
void rev_string(char *s)
{
	char *strstart;

	int i;

	char revstring[99];

	i = 0;
	strstart = s;

	while (*s != '\0')
	{
		s++;
	}

	s--;

	while (s >= strstart)
	{
		revstring[i] = *s;
		i++;
		s--;
	}

	revstring[i] = '\0';
	strcpy(s,revstring);


}
