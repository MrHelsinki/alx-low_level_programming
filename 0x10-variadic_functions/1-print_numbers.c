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
		if (!separator)
			printf("%d", va_arg(args, int));
		else if (separator && i == 0)
			printf("%d", va_arg(args, int));
		else
			printf("%s%d", separator, va_arg(args, int));
	}
	printf("\n");
	va_end(args);
}
