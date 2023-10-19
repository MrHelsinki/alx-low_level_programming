#include "main.h"

/**
  * _strcat - func
  * @dest: ptr 0
  * @src: ptr 1
  * Return: ptr 
  */
char *_strcat(char *dest, char *src)
{
	int des_len;

	int src_len;

	int i;

	char *tmp = src;

	des_len = 0;
	src_len = 0;
	i = 0;

	while (dest[des_len] != '\0')
	{
		des_len++;
	}

	while(tmp[src_len] != '\0')
	{
		src_len++;
	}

	for (i = 0; i < src_len; i++)
	{
		dest[des_len] = tmp[i];
		des_len++;
	}

	dest[des_len] = '\0';

	return (dest);
}
