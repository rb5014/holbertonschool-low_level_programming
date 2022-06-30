#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 *
 * @d: structure to declare
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the dog's owner
 *
 * Return: nothing (void)
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if(d)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
