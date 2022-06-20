#include "main.h"

/**
 * _strspn - gets the lenght of a prefix substring
 *
 *@s: string passed as argument
 *@accept: string containing the characters to keep s
 * Return: number of bytes in the initial segment of s which consist
 * only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j, n = 0;

	while (s[i] != ' ')
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
				n++;
			j++;
		}
		i++;
	}
	return (n);
}
