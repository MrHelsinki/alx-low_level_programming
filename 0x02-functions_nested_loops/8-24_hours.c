#include "main.h"

/**
  *
  *
  *
  *
  *
  *
  *
  */
void jack_bauer(void)
{
	int a;
	
	int b;

	int c;

	int d;

	a = 0;
	b = 0;
	c = 0;
	d = 0;


	while(d < 10)
	{
		if (d == 9)
		{
			if (c == 5)
			{
				if (b == 3 && a == 2)
				{
					break;
				}
				if (b == 9 && a < 2)
				{
					a++;
					b = -1;
				}
				b++;
				c = -1;
			}
			c++;
			d = -1;
		}
		d++;
		_putchar(a + '0');
		_putchar(b + '0');
		_putchar(58);
		_putchar(c + '0');
		_putchar(d + '0');
	}
}
