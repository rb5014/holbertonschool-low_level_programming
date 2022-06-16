#include "main.h"

/**
 * _strcat - concatenates two strings
 * Description : appends src string to dest string, overwriting null byte (\0)
 * at the end of dest, then adds a teminating null byte
 *
 * @dest: pointer to destination string
 * @src: pointer to a source string
 *
 * Return: pointer to the resulting string (dest)
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i]) /* string lenght */
	{
		i++;
	}

	while (dest[i - 1])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
