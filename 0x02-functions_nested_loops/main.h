#include <unistd.h>

/**
  * print - prints char to the console
  *
  * Return: 0 on Success
  */
int printChar(char x)
{
	return (write(STDOUT_FILENO, &x, 1));
}

int print_alphabet()
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz\n";
	int alphLen = 27;
	int i;

	for (i = 0; i < alphLen; i++)
	{
		printChar(alphabet[i]);
	}
}
