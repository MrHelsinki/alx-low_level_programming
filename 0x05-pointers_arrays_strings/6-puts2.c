#include "main.h"

/**
  * puts2 - func
  * @str: par
  */
void puts2(char *str);
{
	int i;

	i = 0;

	while (*str)
	{
		if (i % 2 == 0)
		{
			_putchar(*str);
		}
		str++;
		i++;
	}
}
