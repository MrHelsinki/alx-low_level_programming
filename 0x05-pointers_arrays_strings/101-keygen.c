#include <stdio.h>
#include <time.h>
#include <stdlib.h>


/**
  * main - func
  * Return: 0
  */
int main(void)
{
	int random_pass;

	srand(time(NULL));
	random_pass = rand();

	printf("%d\n",random_pass);

	return (0);
}
