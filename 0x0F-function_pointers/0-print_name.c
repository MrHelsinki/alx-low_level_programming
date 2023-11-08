#include "function_pointers.h"
#include <stdlib.h>

/**
  *print_name - prints name
  *@name: par
  *@f: ptr
  */

void *print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
