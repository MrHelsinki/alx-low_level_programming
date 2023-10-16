#include "main.h"
#include <stddef.h>

/**
  *
  *
  *
  */
int _atoi(char *s)
{
	int i;
	char x;
	int n;
	int revnum;
	int loop;
	int signNumber;
	int count;
	int tmpRevNum;

	signNumber = 1;
	n = NULL
	revnum = 0;
	loop = 1;
	i = 0;
	count = 0;

	while (*s)
	{
		x = s[i];
		i++;

		if (x >= '0' && x <= '9')
		{
			n = x - '0';

			revnum += n * loop;
			loop = loop * 10;

		} else if (x == '-')
		{
				signNumber = signNumber * -1;
		} else
		{
			break;
		}
	}
	tmpRevNum = revnum;
	while (tmpRevNum != 0)
	{
		revnum /= 10;
		count++;
	}
	while (count != 0)
	{
		
	}
}
