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

/*
 * if value before is a separator or nothing then
 * if lowercase go uppercase
 */
			if (s[i - 1] == sep[j] || !(s[i - 1]))
			{
				if (s[i] >= 'a' && s[i] <= 'z')
					s[i] = s[i] - ('a' - 'A');
			}
		}
		i++;
	}
	return (s);
}
