#include <unistd.h>

/**
  * print - prints char to the console
  *
  * Return: 0 on Success
  */
int printChar(char x)
{
	return (write(1, &x, 1));
}
