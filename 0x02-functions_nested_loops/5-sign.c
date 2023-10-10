#include "main.h"

/**
  * print_sign - prints sign of number
  *
  * @n: number tested
  *
  * Return: 1 if positive or -1 if negative or 0 if equal 0
  */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
