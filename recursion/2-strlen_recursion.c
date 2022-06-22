#include "main.h"

/**
 * _strlen_recursion - returns the lenght  of a string
 *
 * @s: string passed as argument
 * Return: lenght of the string
 */

int _strlen_recursion(char *s)
{
	if (s[0] == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
