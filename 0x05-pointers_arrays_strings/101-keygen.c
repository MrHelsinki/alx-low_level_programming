#include <stdio.h>
#include <time.h>
#include <stdlib.h>


/**
  * main - func
  * Return: password
  */
int main(void)
{
	int random_pass;

	srand(time(NULL));
	random_pass = rand();

	return (random_pass);
}
