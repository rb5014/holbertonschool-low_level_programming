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
	dog_t *dog;
	char *namecpy;
	char *ownercpy;

	namecpy = malloc(sizeof(name));
	if (!namecpy)
	{
		free(namecpy);
		return (NULL);
	}
	ownercpy = malloc(sizeof(owner));
	if(!ownercpy)
	{
		free(ownercpy);
		return (NULL);
	}
	strcpy(namecpy, name);
	strcpy(ownercpy, owner);

	dog = malloc(sizeof(dog_t));
	if (!dog)
	{
		free(dog);
		return (NULL);
	}

	dog->name = namecpy;
	dog->age = age;
	dog->owner = ownercpy;

	return (dog);
}
