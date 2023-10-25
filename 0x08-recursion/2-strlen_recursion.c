#include "main.h"

/**
  *_strlen_recursion - func
  *@s: par
  *Return: length
  */

int _strlen_recursion(char *s)
{
	int len;

	len = 0;
	if (*s)
	{
		len += 1;
		_strlen_recursion(s + 1);
	} else
	{
		return (len);
	}
}
