#include "main.h"

/**
*print_binary - fuc
*@n: num
*/

void print_binary(unsigned long int n)
{
	int i, y;
	unsigned long int digit;

	y = 0;
	for (i = 63; i >= 0; i--)
	{
		digit = n >> i;
		if (digit & 1)
		{
			_putchar('1');
			y++;
		}
		else if (y)
			_putchar('0');
	}

	if (!y)
		_putchar('0');
}
