#include "main.h"

/**
  * print_alphabet - prints alphabet
  *
  * Return: 0 on Success
  */
void print_alphabet(void)
{
	char i;

	i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}

	_putchar('\n');
}
