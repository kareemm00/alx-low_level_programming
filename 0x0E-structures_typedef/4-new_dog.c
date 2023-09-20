#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - a function that prints the length of a string
 *@s: string
 *
 * Return: the length of string
 */

int _strlen(const char *s)
{
	int l = 0;

	while (*s++)
	{
		l++;
	}
	return (l);
}

/**
 * *_strcpy - a function that copies the string pointed to by src
 * @dest: pointer to copy string
 * @src: string copied
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int k;

	for (k = 0; src[k]; k++)
	{
		dest[k] = src[k];
	}
	dest[k] = '\0';
	return (dest);
}

/**
 * new_dog - new dog
 * @name: name of dog
 * @age: dog age
 * @owner: dog owner
 *
 * Return: pointer to the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);
	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->name = _strcpy(dog->name, name);
	dog->owner = _strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}

