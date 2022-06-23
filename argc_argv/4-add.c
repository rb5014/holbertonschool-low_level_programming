#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _isnumber - checks for a number
 *
 * @s: string passed as argument
 *
 * Return: 0 if number, 1 otherwise
 */

int _isnumber(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 48 && s[i] <= 57)
			i++;

		else
			return (1);
	}
	return (0);
}

/**
 * main - adds positive numbers
 * print the result, + \n
 * if no number is passed to the program,print 0, +\n
 *
 * if on of the number contains symbols that are not digits,
 * print Error, +\n and return 1
 *
 * numbers and the additions of allnumbers can be stored in an int
 *
 * @argc: number of arguments
 * @argv: array of strings containing the arguments
 *
 * Return: 0 if success, or 1 if fail
 */

int main(int argc, char *argv[])
{
	int sum = 0, i;

	if (argc == 1)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (_isnumber(argv[i]) == 0)
				sum += atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}

	exit(EXIT_SUCCESS);

}
