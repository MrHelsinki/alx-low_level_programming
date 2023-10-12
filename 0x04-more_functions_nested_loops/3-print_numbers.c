#include "main.h"

/**
 * print_numbers - prints the number 0to9
 * followed by a new line
 * Rrturn: void
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}

	_putchar('\n');
}
