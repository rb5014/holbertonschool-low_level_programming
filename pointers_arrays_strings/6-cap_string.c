#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 *
 * @s: pointer to a string
 *
 * Return: pointer to the resulting string (s)
 */

char *cap_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i - 1] == 32)
		{
			if (s[i] >= 'a')
				s[i] = s[i] - ('a' - 'A');
		}
		i++;
	}
	return (s);
}
