#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 *
 *@dest: destination of the copy
 *@src: source to copy
 *@n: number of bytes to change starting from the first
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n != 0)
	{
		n--;
		dest[n] = src[n];
	}
	return (dest);
}
