#include "main.h"

/**
 * _isupper - checks for uppercase character
 *
 * @c - character to check
 *
 * Return: 1 if c i suppercase, 0 otherwise
 */

int _isupper(int c)
{
        if (c >= 65 && c <= 90)
                return (1);
        return (0);
}
