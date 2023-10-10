#include <unistd.h>
#include <main.h>

/**
  * print - print char to console
  * print_alphabet - print alphabet
  *
  * Return: 0 on Success
  */
int _printchar(char x)
{
	return (write(STDOUT_FILENO, &x, 1));
}

void print_alphabet(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz\n";
	int alphLen = 27;
	int i;

	for (i = 0; i < alphLen; i++)
	{
		printChar(alphabet[i]);
	}
}
