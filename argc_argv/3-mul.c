#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * print the result, + \n
 * the two numbers and result of mul can be stored in an integer
 * if no args, print 'Error' + \n and return 1
 *
 * @argc: number of arguments
 * @argv: array of strings containing the arguments
 *
 * Return: 0 if success, or 1 if fail
 */

int main(int argc, char *argv[])
{
	int mul = 0;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	exit(EXIT_SUCCESS);
}
