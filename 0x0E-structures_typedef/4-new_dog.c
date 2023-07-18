#include "dog.h"
#include "stdio.h"
#include "stdlib.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * _strlen - gives length of a string
 * @s: the string to get length
 * Return: string length
 */
int _strlen(char *s)
{
	int a;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}
/**
 * _strcpy - copies the string
 * @dest: where it is copied to
 * @src: what to copy
 * Return: pointer to copied string
 */
char *_strcpy(char *dest, char *src)
{
	int len, a;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	for (a = 0; a < len; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';
	return (dest);
}
/**
 * new_dog - creates a new dog
 * @name: name to be copied
 * @age: age of dog
 * @owner: owner to be copied
 * Return: NULL or pointer to new dog
 */
dog_t *new_dog(char *name, float  age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
