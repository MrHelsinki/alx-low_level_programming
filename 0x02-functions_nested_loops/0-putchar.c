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

	for ( i ; i < msgLen ; i++){
		print(message[i]);
	}

	return (0);
}
