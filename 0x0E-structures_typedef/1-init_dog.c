#include "dog.h"
#include "stdlib.h"
#include "stdio.h"
/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to the struct dog
 * @name: name of dog to initialize
 * @age: age of dog to initialize
 * @owner: owner of the dog to be initialized
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
