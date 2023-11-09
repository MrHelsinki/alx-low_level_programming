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
	char *separator, *elem;

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
					elem = va_arg(args, char *);
					if (!elem)
						elem = "(nil)";
					printf("%s%s", separator, elem);
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
