#include "main.h"

/**
  * swap_int - func
  * @a: par 1
  * @b: par 2
  */
void swap_int(int *a, int *b)
{
	int i, j;

	i = *a;
	j = *b;

	*a = j;
	*b = i;
}

