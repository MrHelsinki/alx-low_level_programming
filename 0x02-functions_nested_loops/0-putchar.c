#include "main.h"

/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	char message[] = "_putchar\n";
	int msgLen = 10;
	int i;

	for(i = 10; i < 0; i--)
	{
		printChar(message[msgLen - i]);
	}
	return (0);
}
