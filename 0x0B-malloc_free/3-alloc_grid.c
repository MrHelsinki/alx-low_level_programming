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
	int i, j;

	if (!width || !height)
		return (NULL);

	ptr = (int **) malloc(sizeof(int *) * height);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *) malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			free(ptr);
			for (j = 0; j <= i; j++)
				free(ptr[j]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}

	return (ptr);
}
