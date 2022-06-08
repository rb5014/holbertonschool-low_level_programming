#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 *
 * @n: the parameter to be computed to get the last digit
 * Return: n (the value of the last digit)
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = n * -1;
	_putchar((n % 10) + '0');
	return (n % 10);
}
