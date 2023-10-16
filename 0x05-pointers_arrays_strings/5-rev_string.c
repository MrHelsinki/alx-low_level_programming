#include "main.h"
#include <string.h>
/**
  * rev_string - func
  * @s: par
  */
void rev_string(char *s)
{
	char *strstart;

	int i;

	len = 0;
	i = 0;
	strstart = s;

	while (*s != '\0')
	{
		s++;
	}

	s--;

    char revstring[999]; 

	while (s >= strstart)
	{
		revstring[i] = *s;
		i++;
		s--;
	}

	strcpy(s, revstring);


}
