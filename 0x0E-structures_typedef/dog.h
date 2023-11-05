#ifndef DOG_H
#define DOG_H

/**
  *struct dog - dog's struc
  *@name: name
  *@age: age
  *@owner: owner
  *Description: a dog's info
  */

struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
  *dog_t - typedef struct dog
  */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
