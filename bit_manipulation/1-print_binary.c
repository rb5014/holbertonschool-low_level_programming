#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: unsigned long int to print in binary rep
 *
 * no malloc, no arrays, no % or / operators
 * Return: nothing(void)
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + 48);
}
