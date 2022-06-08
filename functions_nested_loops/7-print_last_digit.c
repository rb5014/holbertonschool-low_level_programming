#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 *
 * @n: the parameter to be computed to get the last digit
 * Return: n (the value of the last digit)
 */
int print_last_digit(int n)
{
	int l;

	if (l < 0)
		l *= -1;
	l = n % 10;
	_putchar(l + '0');

	return (l);
}
