#include "main.h"

/**
  * _abs - returns absolute number of a number
  *
  * @n: number we are getting it s absolute number
  *
  * Return: the value of the abdsolute nubmer
  *
  */
int _abs(int n)
{
	if (n < 0)
	{
		int abs_n = n * (-1);

		return (abs_n);
	}
	else
		return (n);
}
