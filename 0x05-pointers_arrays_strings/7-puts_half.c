#include "main.h"

/**
  * puts_half - func
  * @str: par
  */
void puts_half(char *str)
{

	int len;

	char *tmp = str;

	int halflen;

	len = 0;

	while (*tmp)
	{
		len++;
		tmp++;
	}

	if (len % 2 != 0)
	{
		halflen = (len / 2) + 1;
	} else
	{
		halflen = len / 2;
	}

	str += halflen;
	while (*str)
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');

}
