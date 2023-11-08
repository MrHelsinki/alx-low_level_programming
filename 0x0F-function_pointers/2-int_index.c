#include <stddef.h>
#include "function_pointers.h"

/**
  *int_index - func
  *@array: par
  *@size:par
  *@cmp: function ptr
  *Return: return
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !size || !cmp)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
