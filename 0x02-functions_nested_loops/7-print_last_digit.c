#include "main.h"

/**
  * print_last_digit - prints last digit of number
  *
  * @n: number being operated on
  *
  * Return: last digit of said number
  */
int print_last_digit(int n)
{
	int x;

	if (n == INT_MIN)
	{
		x = 8;
		_putchar(x '0');
		return (x);
	}

	if (n < 0)
		n = -n;

	x = n % 10;

	_putchar(x + '0');
	return (x);
}
