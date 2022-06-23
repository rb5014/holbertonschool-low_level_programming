#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its name,followed by a new line
 *
 * @argc - number of arguments
 * @argv - array of strings containing the arguments
 *
 * Return: Always 0 (Success)
 */

int main (int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);

	exit(EXIT_SUCCESS);
}
