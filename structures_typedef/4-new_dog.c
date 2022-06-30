#include "dog.h"
#include <stdio.h>

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
	dog_t doggy;
	dog_t *doggyptr;
	char *namecpy;
	char *ownercpy;

	doggyptr = &doggy;
	namecpy = name;
	ownercpy = owner;
	doggyptr->name = namecpy;
	doggyptr->age = age;
	doggyptr->owner = ownercpy;

	if (!doggyptr)
		return (NULL);

	return (doggyptr);
}
