#include "main.h"

/**
  * print_alphabet_x10 - prints alphabet 10 times
  *
  *
  * Return: void
  *
  */
void print_alphabet_x10(void)
{
	int i;

	i = 0;

	while (i < 10)
	{
		char x;

		x = 'a';

		while (x <= 'z')
		{
			_putchar(x);
			x++;
		}

		_putchar('\n');
		i++;
	}
}
