#include "main.h"

/**
 * _strstr - locates a substring
 * Description: finds the first occurence of the substring needle int the
 *string haystack. The terminating null bytes are not compared
 *@haystack: string to check
 *@needle: substring to comapre
 *
 * Return: pointer to the beginning of the located substring or,
 * NULL is the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j;

	while (haystack[i])
	{
		j = 0;
		while (haystack[i] == needle[j])
		{
			i++;
			j++;
			if (needle[j] == '\0')
				return (&haystack[i - j]);
		}
		i++;
	}
	return (0);
}
