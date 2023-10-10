#include "main.h"
#include <string.h>


/**
  * main - print "_putchar"
  *
  *Return: 0 on Success
  *
  *
  */
int main(void)
{
	char str[] = "_putchar\n";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(str[i]);
	}
	return (0);
}
