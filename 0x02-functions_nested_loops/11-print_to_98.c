#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * @n: print from this number
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n; n <= 98; n++)
		{
			if (n != 98)
				printf("%d, ", n);
			else if (n == 98)
				printf("%d\n", n);
		}
	} else if (n >= 98)
	{
		for (n = n; n >= 98; n--)
		{
			if (n != 98)
				printf("%d, ", n);
			else if (n == 98)
				printf("%d\n", n);
		}
	}
}
