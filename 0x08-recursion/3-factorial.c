#include "main.h"

/**
  *factorial - fuc
  *@n: par
  *return - int
  */
int factorial(int n)
{
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
