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
	int abs_n;

	int x;

	if (n < 0)
		abs_n = -n;
	else
		abs_n = n;

	x = abs_n % 10;

	_putchar(x + '0');
	return (x);
}
