#include "main.h"

/**
 * _strncpy - copies up to n characters from a string to another
 * Description : appends src string to dest string, overwriting null byte (\0)
 * at the end of dest, then adds a teminating null byte
 *
 * @dest: pointer to destination string
 * @src: pointer to a source string
 * @n: number of bytes from src
 *
 * Return: pointer to the resulting string (dest)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	while (src[j] && j < n)
	{
		dest[j] = src[j];
			j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
