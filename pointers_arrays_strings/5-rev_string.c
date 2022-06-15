#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: pointer of a string
 *
 * Return: nothing(void)
 */

void rev_string(char *s)
{
	int i, j = 0;
	char tmp[10];

	for (i = 0; s[i]; i++)
	{
		tmp[i] = s[i];
	}
	while (j < 9)
	{
		s[i - 1] = tmp[j];
		i--;
		j++;
	}
}
