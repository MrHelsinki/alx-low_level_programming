#include "main.h"

/**
  *_sqrt_recursion - func
  *@n: par
  *Return: int
  */
int _sqrt_recursion(int n)
{
	return (sqrt_recursion_var(n, 0));
}

/**
  *sqrt_recursion_var - func
  *@n: int
  *@i: int
  *Return: return
  */
int sqrt_recursion_var(int n, int i)
{
	if (n < 0)
		return (-1);

	if (i * i == n)
		return (i);

	if (i * i > n)
		return (-1)

	_sqrt_recursion_var(n, i + 1);
}
