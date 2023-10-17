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

	srand(time(0));
	random_pass = rand();

	return (random_pass);
}
