#ifndef DOG_H
#define DOG_H

/**
 * struct dog - new type struct dog
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the dog's owner
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
#endif
