#include "main.h"

/**
*binary_to_uint - func
*@b: string of 0 and 1
*Return: dec u int
*/

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int n = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);

		n = 2 * n + (b[i] - 48);
	}

	return (n);
}
