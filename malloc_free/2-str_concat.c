#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * if NULL is passed, treat it as an empty string
 *
 * @s1: 1st string
 * @s2: 2nd string to add to s1
 * Return: pointer to a newly allocated space in memory which contains
 * the contents of s1, followed by the content of s2, and null terminated
 * NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned int len1, len2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = strlen(s1);
	len2 = strlen(s2);
	s = malloc((len1 + len2 + 1) * sizeof(char));
	if (s)
	{
		for (i = 0; i < len1; i++)
			s[i] = s1[i];
		for (j = 0; j <= len2; i++, j++)
			s[i] = s2[j];

		return (s);
	}
	else
		return (NULL);
}
