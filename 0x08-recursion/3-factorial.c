#include "main.h"

/**
  *factorial - fuc
  *@n: par
  *Return: return
  */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	} else if (n <= 1)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
