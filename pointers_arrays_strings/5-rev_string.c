#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: pointer of a string
 *
 * Return: nothing(void)
 */

void rev_string(char *s)
{
	int len = 0, i, tmp;

	while(s[len]) /* get the lenght of the string*/
	{
		len++;
	}

	for (i = 0; i < len / 2; i++) /* tmp store each s[i] 1 by 1 */
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i -1] = tmp;
	}
}
