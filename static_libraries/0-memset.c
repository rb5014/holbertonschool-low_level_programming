#include "main.h"

/**
 * _memset - fills the first n bytes of the mem area pointed by s with const b.
 *
 *@s: string passed as argument
 *@b: constant byte to add in memory area
 *@n: number of bytes to change starting from the first
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n != 0)
	{
		n--;
		s[n] = b;
	}
	return (s);
}
