#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  *alloc_grid - func
  *@width: func
  *@height: func
  *Return: return
  */

int **alloc_grid(int width, int height)
{
	int **ptr;
	int *tmp;
	int i;

	if (!width || !height)
		return (NULL);

	ptr = (int **) malloc(sizeof(int *) * height);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
		ptr[i] = (int *) malloc(sizeof(int) * width);

	if (ptr[i] == NULL)
		return (NULL);

	for (tmp = &ptr[0][0]; tmp <= &ptr[height - 1][width - 1]; tmp++)
		*tmp = 0;
	*ptr = tmp;

	return (ptr);
}
