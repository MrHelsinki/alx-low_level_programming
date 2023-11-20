#include "main.h"

/**
 * get_endianness - func
 * Return: int
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
