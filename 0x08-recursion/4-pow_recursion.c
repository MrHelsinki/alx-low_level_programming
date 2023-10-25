#include "main.h"

/**
  *_pow_recursion - func
  *@x: par
  *@y: par
  *Return: int
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	} else if (y == 0)
	{
		return (1);
	}

	y--;
	return (x * _pow_recursion(x, y));
}
