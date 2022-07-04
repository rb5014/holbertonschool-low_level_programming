#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 *
 * if d is NULL, prints nothing
 * if an element of d is NULL, prints (nil) (ex: Name: (nil))
 *
 * @d: struct dog structure passed in function
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name == NULL ? "(nil)" : d->name);
		printf("Age: %f\n", d->age == 0 ? 0 : d->age);
		printf("Owner: %s\n", d->owner == NULL ? "(nil)" : d->owner);
	}
}
