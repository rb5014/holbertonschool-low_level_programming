#include "main.h"

/**
 * _strcmp - comapres two strings
 * Description : works exactly like strcmp
 *
 * @s1: pointer to string to compare
 * @s2: pointer to string to compare
 *
 * Return: 0 is succes, > 0 if s1 greater than s2, < 0 otherwise
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, ret = 0;

	while (s1[i] || s2[i])
	{
		if (!(s1[i] == s2[i]))
		{
			ret = s1[i] - s2[i];
			break;
		}
		i++;
	}
	return (ret);
}
