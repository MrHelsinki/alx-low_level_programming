#include "main.h"
#include <stdio.h>
/**
  * print_array - func
  * @a: par 1
  * @n: par 2
  */
void print_array(int *a, int n)
{

	int i;

	i = 0;
	while (i < n)
	{
		printf("%d, ",*(a+i));
		i++;
	}

	_putchar('\n');
}
