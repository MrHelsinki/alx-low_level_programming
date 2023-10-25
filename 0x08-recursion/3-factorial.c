#include "main.h"

/**
  *factorial - fuc
  *@n: par
  *return - int
  */
int factorial(int n)
{
	return (n * factorial(n - 1));
}
