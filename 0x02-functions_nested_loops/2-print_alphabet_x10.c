#include <main.h>

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

	for (i; i < 10; i++)
	{
		char x;

		x = 'a';

		while (x <= 'z')
		{
			_putchar(x);
			x++;
		}

		_putchar('\n');
	}
}
