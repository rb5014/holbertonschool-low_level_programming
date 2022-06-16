#include "main.h"

/**
 * leet - encodes into 1337
 * Description : a, A to 4, e, E to 3, o, O to 0, t, T to 7, l, L to 1
 *
 * @s: pointer to a string
 *
 * Return: pointer to the resulting string (s)
 */

char *leet(char *s)
{
	int i = 0, j;
	char *lower = "aeotl";
	char *upper = "AEOTL";
	char *encode = "43071";

	while (s[i])
	{
		j = 0;
		while (lower[j])
		{
			if (s[i] == lower[j] || s[i] == upper[j])
			{
				s[i] = encode[j];
			}
			j++;
		}
		i++;
	}
	return (s);
}
