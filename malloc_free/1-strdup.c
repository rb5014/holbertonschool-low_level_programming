#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _strdup - returns pointertonew allocated space in mem,(contains cpy of str)
 *
 * Description: The _strdup() function returns a pointer to a new string
 * which is a duplicate of the string str.
 * Memory for the new string is obtained
 * with malloc, and can be freed with free.
 * @str: string to copy
 *
 * Return: NULL if str == NULL,or pointer to a duplicated string.
 * NULL if insufficient mem was available
 */

char *_strdup(char *str)
{
	char *cpy;
	unsigned int len, i;

	len = strlen(str);

	cpy = malloc(len * sizeof(char));
	if (cpy && str && len != 0)
	{
	for (i = 0; i < len && cpy; i++)
		cpy[i] = str[i];
	return (cpy);
	}
	else
		return (NULL);
}
