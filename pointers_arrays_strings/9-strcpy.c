#include "main.h"

/**
 * _strcpy - copies the string pointed to src to the buffer pointed to by dest
 * + include \0
 * @n: pointer to use as a parameter to pass a value to the var it points to
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1; /* start at -1 to get to 0 when enter loop */

	do /* do while to do statements before condition checked */
	{
		i++;
		dest[i] = src[i];
	}
	while (src[i]);
	return(dest);
}
