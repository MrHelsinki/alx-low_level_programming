#include <stdio.h>
#include <time.h>
#include <stdlib.h>


/**
  * main - func
  * Return: password
  */
int main(void)
{
	srand(time(NULL));
	random_pass = rand();

	return (random_pass);
}
