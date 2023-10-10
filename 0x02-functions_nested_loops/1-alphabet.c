#include "main.h"

/**
  * main - prints alphabet
  *
  * Return: 0 on Success
  */
int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet()
{
	char i;
	i = 'a';

	while ( i < 'z')
	{
		_putchar(i);
	}
}
