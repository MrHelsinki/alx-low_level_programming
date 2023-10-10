#include "main.h"

/**
  * main - prints alphabet
  *
  * Return: 0 on  Success
  */
int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz\n";
	int alphLen = 27;
	int i;

	for (i = 0; i < alphLen; i++)
	{
		printChar(alphabet[i]);
	}
	return (0);
}
