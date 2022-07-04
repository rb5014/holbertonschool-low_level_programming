#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - creates a new dog
 * need to store a copy of name and owner
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the dog's owner
 *
 * Return: NULL if the function fails, pointer to a dog_t struct if success
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = (dog_t *) malloc(sizeof(dog_t));
	if (!(d))
		return (NULL);

	d->name = malloc(strlen(name) + 1);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->owner = malloc(strlen(owner) + 1);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	strcpy(d->name, name);
	strcpy(d->owner, owner);
	d->age = age;

	return (d);
}
