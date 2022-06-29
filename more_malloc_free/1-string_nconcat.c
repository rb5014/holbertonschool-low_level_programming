#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * if n >= lenght s2 then use entire string s2
 * @s1: 1st string to concatenate
 * @s2: 2nd string to concatenate
 * @n: 1st n bytes to use from s2
 *
 * Return: pointer to a newly allocated space in memory, containing s1
 * + first n bytes of s2, and null terminated
 * if it fails, return NULL, if NULL is passed, treat it as an empty string
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int len1, len2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = strlen(s1);
	if (n >= strlen(s2))
		len2 = strlen(s2);
	else
		len2 = n;

	s = malloc((len1 + len2 + 1) * sizeof(char) + 5);

	if (s)
	{
		for (i = 0; i < len1; i++)
			s[i] = s1[i];
		for (j = 0; j < len2; i++, j++)
			s[i] = s2[j];
		s[i] = '\0';
		return (s);
	}
	else
	{
		return (NULL);
	}
}
