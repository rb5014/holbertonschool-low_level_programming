#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 *
 * @n: the parameter to be computed
 *
 * Return: n (the value of the last digit)
 */
int print_last_digit(int n)
{
	n = n % 10;
	_putchar(48 + n);
	return (n);
}
