#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  *malloc_checked - func
  *@b: par
  */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc((size_t)b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
