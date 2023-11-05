#include <stdlib.h>
#include "dog.h"
#include <string.h>
/**
  *new_dog - func
  *@name: par for new dog
  *@age: par for new dog
  *@owner: par for new dog
  *Return: new dog struc
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(strlen(name) * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(stren(owner) * sizeof(owner));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	strcpy(dog->name, name);
	dog->age = age;
	strcpy(dog->owner, owner);

	return (dog);
}
