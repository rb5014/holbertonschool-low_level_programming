#include "main.h"

/**
 * string_toupper - changes all lowercases letters of a string to uppercase

 * @s: pointer to a string
 *
 * Return: pointer to the resulting string (s)
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 'a')
			s[i] = s[i] - ('a' - 'A');
		i++;
	}
	return (s);
}
