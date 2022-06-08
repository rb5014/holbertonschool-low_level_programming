#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 *
 * @n: the parameter to be computed to get the last digit
 * @a: parameter that takes the value of the operation
 * Return: n (the value of the last digit)
 */

int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;
	a = n % 10;
	_putchar('0' + a);
	return (a);
}
