#include "dog.h"

/**
  *init_dog - func
  *@d: par
  *@name: par
  *@age: par
  *@owner: par
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d.name = name;
	d.age = age;
	d.owner = owner;
}
