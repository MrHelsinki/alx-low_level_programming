#include<stddef.h>
#include "function_pointers.h"

/**
  *array_iterator - function
  *@array: array to iterate over
  *@size: size of said array
  *@action: action to perform on each element of the array
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !size || !action)
		return;

	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
