#include "main.h"

/**
 * _strchr - loacates a character in a string
 *
 *@s: string passed as argument
 *@c: character to locate
 * Return: pointer to the first occurrence of the character c in the string s,
 * or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (0);
}
