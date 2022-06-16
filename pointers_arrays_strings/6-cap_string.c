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
	int i = 0, j = 0;
	char *sep = " \t\n,;.!?\"(){}";

	while (s[i])
	{
		for (j = 0; sep[j]; j++)
		{
			if (s[i] == sep[j])
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
					s[i + 1] = s[i + 1] - ('a' - 'A');		}
		i++;
	}
	return (s);
}
