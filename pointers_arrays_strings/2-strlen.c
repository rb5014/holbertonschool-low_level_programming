#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: string passed through a pointer char *s
 *
 * Return: lenght of the string(int)
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}
