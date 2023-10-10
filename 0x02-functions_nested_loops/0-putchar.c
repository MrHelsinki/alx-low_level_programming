#include "main.h"

/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	char message[] = "_putchar";
	int msgLen = 8;
	int i;

	for(i = 0; i < msgLen; i++)
	{
		printChar(message[i]);
	}

	return (0);
}
