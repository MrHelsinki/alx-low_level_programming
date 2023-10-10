#include "main.h"

/**
  * print_to_98 - print to 98 from n
  * @n: int var to print from 
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
		for (n; n >= 98; n--)
		{
			if (n != 98)
				printf("%d, ", n);
			else if (n == 98)
				printf("%d\n", n);
		}
	}
}
