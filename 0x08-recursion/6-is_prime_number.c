#include "main.h"

/**
  *is_prime_number - func
  *@n: int
  *Return: return
  */

int is_prime_number(int n)
{
	return (is_prime_number_var(n, 2));
}

/**
  *is_prime_number_var - func
  *@n: par
  *@i: par
  *Return: return
  */
int is_prime_number_var(int n, int i)
{
	if (n <= 1)
		return (0);

	if (n > i)
	{
		if (n % i == 0)
			return (0);
		return (is_prime_number_var(n, i + 1));
	}

	return (1);


}
