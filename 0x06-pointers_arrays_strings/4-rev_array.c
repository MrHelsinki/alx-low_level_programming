#include "main.h"

/**
  *reverse_array - function
  *@a: array of integers
  *@n: num of elemets in array a
  */

void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	i = 0;
	while (i < n)
	{
		n--;
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
		i++;
	}
}
