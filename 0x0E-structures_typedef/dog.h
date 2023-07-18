#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog
 * @name: it's name
 * @age: it's age
 * @owner: it's owner's name
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
