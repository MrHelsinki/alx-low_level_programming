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

	int nindex;

	if (n < 0)
		abs_n = -n;
	else
		abs_n = n;

	while (abs_n > 9)
	{
		abs_n /= 10;
		nindex++;
	}

    _putchar(abs_n[nindex]);
	return (abs_n[nindex]);
}
