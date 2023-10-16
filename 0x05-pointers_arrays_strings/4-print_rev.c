#include "main.h"

/**
  *
  *
  *
  */
void print_rev(char *s)
{

	char *start;

	start = s;

	while (*s != '\0')
	{
		s++;
	}
	s--;

	while (s >= start)
	{
		_putchar(*s);
		s--;
	}
}
