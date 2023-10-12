#include "main.h"

/**
  * _isdigit - check if char is digit
  * @c: char being checked
  * Return: 1 if digit 0 if not
  */
int _isdigit(int c)
{
	if (c <= 57 && c >= 48)
		return (1);
	return (0);
}
