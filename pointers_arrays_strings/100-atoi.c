#include "main.h"

/**
 * atoi - convert string to integer
 * Description: nb can be preceded by an infinite nb of characters
 * all signs taken into account
 * no nb ==> return 0
 * no long type allowed
 * no var of "type" array
 * no hardcode
 * flag -fsanitize=signed-integer-overflow to compile
 * @s: pointer to a string
 *
 * Return : 0 if no number in the string, else int
 */

int _atoi(char *s)
{
	int nbminus = 0, i = 0, num = 0;

	while (s[i])
		{
			if (s[i] == '-')
			{
				nbminus++;
			}
			else if (s[i] >= '0' && s[i] <= '9')
			{
				while (s[i] >= '0' && s[i] <= '9')
				{
					num = num * 10 + s[i] - '0';
					i++;
				}
				if (nbminus % 2 != 0)
					return (-num);
				else
					return (num);
			}
			i++;
		}
	return (0);
}
