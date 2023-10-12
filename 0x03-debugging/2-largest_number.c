#include "main.h"

/**
* largest_number - determine largest number
* @a: first num
* @b: second num
* @c: third num
*
* Return: result
*/

int largest_number(int a, int b, int c)
{
	int lrg;

	if (a > b && a > c)
	{
		lrg = a;
	}
	else if (a > b && c > a)
	{
		lrg = c;
	}
	else if (b > c)
	{
		lrg = b;
	}
	else
	{
		lrg = c;
	}

return (lrg);
}
