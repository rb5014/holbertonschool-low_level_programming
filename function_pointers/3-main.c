#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - performs simple operations
 * Usage : calc num1 operator num2
 * atoi need to be used to convert the nums written as strings into int
 * operator is either +, -, *, /, or %.
 *
 * Description: the program orints the result of the operation, + \n
 * The result of all operations can be sotred in an int (no overflow)
 *
 * If number of args is wrong, print Error +\n + exit(98)
 * if the operator is none of the above, print Error + \n + exit(99)
 * If the user tries to divide(/or %) by 0, print Error + \n + exit(100)
 *
 * @argc: number of args
 * @argv: array of arguments
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{

	char *op[] = {"+", "-", "*", "/", "%"};
	int i = 0;

	while (i < 5)
	{
		if (strcmp(op[i], argv[2]))
			i++;
		else
			break;
	}
	if (i == 5)
	{
		printf("Error\n");
		exit(99);
	}

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (strcmp(argv[2], "/") == 0 && strcmp(argv[3], "0") == 0)
	{
		printf("Error\n");
		exit(100);
	}
	if (strcmp(argv[2], "'%'") == 0 && strcmp(argv[3], "0") == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
