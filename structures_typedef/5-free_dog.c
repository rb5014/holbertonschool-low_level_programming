#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees the struct dog_t
 *
 * @d: pointer to a struct dog
 *
 * Return: nothing(void)
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
