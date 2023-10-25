#include "main.h"

/**
  *_puts_recrusion - func
  *@s: par
  */

void _puts_recrusion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recrusion(s + 1);
	}
}
