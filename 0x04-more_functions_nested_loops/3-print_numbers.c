#include "main.h"

/**
  * print_numbers - prints from 1 to 9
  * Return - 0
  */
void print_numbers(void)
{
	char string[11];

	string[11] = "0123456789\n";

	int i;

	for (i = 0; i < 11; i++)
		_putchar(string[i]);

	return (0);
}
