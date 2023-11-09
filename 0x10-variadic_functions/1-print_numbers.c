#include "variadic_functions.h"
#include <stdio.h>

/**
  *print_numbers - func
  *@separator: to separate
  *@n: num of args
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	if (!n)
		return;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d%c", va_arg(args, int), *separator);
	}
	printf("\n");

	va_end(args);
}
