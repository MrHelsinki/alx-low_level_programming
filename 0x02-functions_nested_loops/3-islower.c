#include "main.h"

/**
  *
  * _islower - print 1 if lower case ; 0 if else
  *
  * Return - 1 if lower case - 0 if else 
  *
  *
  */

int _islower(int c)
{
	int asciiValue = (int) c;

	if (asciiValue < 97 && asciiValue > 122)
		return (1);
	else
		return (0);
}
