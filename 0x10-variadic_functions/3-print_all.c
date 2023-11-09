#include "variadic_functions.h"
#include <string.h>

/**
  *print_all - func
  *@format: par
  */

void print_all(const char * const format, ...)
{
	int len, i;
	va_list args;
	char *separator;

	separator = "";
	len = strlen(format);
	va_start(args, format);
	if (format)
	{
		while (i < len)
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(args, int));
					break;
				case 'i':
					printf("%s%i", separator, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(args, double));
					break;
				case 's':
					printf("%s%s", separator, va_arg(args, char *));
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}
	return;
	va_end(args);
	printf("\n");
}
