#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - func
 * @b: par
 *Return: return
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
