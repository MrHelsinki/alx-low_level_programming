#include "main.h"

/**
  * _islower - print 1 if lower case ; 0 if else
  *
  * @c: letter being tested
  *
  * Return: 1 if lower case - 0 if else
  */

int _islower(int c)
{
	if (c > 97 && c < 122)
		return (1);
	else
		return (0);
}
