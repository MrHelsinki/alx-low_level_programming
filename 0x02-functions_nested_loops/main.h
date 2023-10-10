#include <unistd.h>

/**
  * print - prints char to the console
  *
  * Return: 0 on Success
  */
int print(char x)
{
	return (write(STDOUT_FILENO, &x, 1));
}
