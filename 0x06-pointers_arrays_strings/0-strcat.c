#include "main.h"

/**
  * _strcat - func
  * @dest: ptr 0
  * @src: ptr 1
  */
char *_strcat(char *dest, char *src)
{
	int des_len;

	int src_len;

	int i;

	des_len = 0;
	src_len = 0;
	i = 0;

	while (*dest)
	{
		des_len++;
		dest++;
	}

	while (*src)
	{
		src_len++;
		src++;
	}

	for (i = 0; i < src_len; i++)
	{
		*des[des_len] = *src[i];
		des_len++;
	}

	*des[des_len] = 48;
}
