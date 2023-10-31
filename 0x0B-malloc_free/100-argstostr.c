#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  *argstostr - func
  *@ac: par
  *@av:par
  *Return: ptr to char
  */
char *argstostr(int ac, char **av)
{
	int i, y, j, k, l;
	int chars;
	char *ptr;

	(void) ac;
	(void) av;
	y = 0;
	chars = 0;
	l = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	for (j = 0; j < ac; j++)
	{
		for (k = 0; av[j][k] != '\0'; k++)
		{
			chars++;
		}
	}
	ptr = (char *) malloc(sizeof(char) * (chars + (ac + 1)));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		while (av[i][l])
		{
			ptr[y] = av[i][l];
			l++;
			y++;
		}
		ptr[y] = '\n';
		y++;
		l = 0;
	}
	return (ptr);
}
