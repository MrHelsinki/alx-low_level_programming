#include "main.h"

/**
  *_puts_recrusion - func
  *@s: par
  */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
