#include "main.h"

/**
 * _strcpy - copies the string pointed to src to the buffer pointed to by dest
 * + include \0
 * @dest: pointer of a buffer that will receive a copy of a string
 * @src: pointer of a string
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1; /* start at -1 to get to 0 when enter loop */

/* do while to do statements before condition checked */
	do {
		i++;
		dest[i] = src[i];
	} while (src[i]);
	return (dest);
}
