#include "variadic_functions.h"

/**
  *sum_them_all - function to sum all ints
  *@n: par 1
  *
  *Return: return int
  */

int sum_them_all(const unsigned int n, ...)
{
	int sum;

	sum = 0;
	if (!n)
		return;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end;

	return (sum);

}
