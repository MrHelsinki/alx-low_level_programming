#include "3-calc.h"
/**
  *op_add - add 2 integers
  *@a: num 1
  *@b: num 2
  *Return: result
  */
int op_add(int a, int b)
{
	int result;

	result = a + b;

	return (result);
}

/**
  *op_sub - sub int 1 from 2
  *@a: num 1
  *@b: num 2
  *Return: result
  */

int op_sub(int a, int b)
{
	int result;

	result = a - b;

	return (result);
}

/**
  *op_mul - mul int 1 by 2
  *@a: num 1
  *@b: num 2
  *Return: result
  */

int op_mul(int a, int b)
{
	int result;

	result = a * b;

	return (result);
}

/**
  *op_div - div num 1 by 2
  *@a: num 1
  *@b: num 2
  *Return: result
  */

int op_div(int a, int b)
{
	int result;

	result = a / b;

	return (result);
}

/**
  *op_mod - modulo num 1 by 2
  *@a: num 1
  *@b: num 2
  *Return: return
  */

int op_mod(int a, int b)
{
	int result;

	result = a % b;

	return (result);
}
