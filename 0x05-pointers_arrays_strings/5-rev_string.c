#include "main.h"
#include <string.h>
/**
  * rev_string - func
  * @s: par
  */
void rev_string(char *s)
{
	int len;

	char *end;

	end = s;
	len = 0;

	while (*end)
	{
		end++;
		len++;
	}

	end--;

	while (s < end)
	{
		char temp = *s;
		*s = *end;
		*end = temp;
		s++;
		end--;
	}
}
