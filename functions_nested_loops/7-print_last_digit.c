#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 *
 * @n: the parameter to be computed to get the last digit
 * Return: n (the value of the last digit)
 */

int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = n * -1;
	a = n % 10;
	_putchar(a + '0');
	return (a);
}
