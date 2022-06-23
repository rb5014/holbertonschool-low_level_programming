#include "main.h"

/**
 * _strncat - concatenates two strings for n characters from src
 * Description : appends src string to dest string, overwriting null byte (\0)
 * at the end of dest, then adds a teminating null byte
 *
 * @dest: pointer to destination string
 * @src: pointer to a source string
 * @n: number of bytes from src
 *
 * Return: pointer to the resulting string (dest)
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i]) /* string lenght without the null byte */
	{
		i++;
	}

	while (dest[i - 1] && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (!(dest[i]))
		dest[i] = '\0';
	return (dest);
}
