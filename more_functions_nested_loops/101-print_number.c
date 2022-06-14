#include "main.h"

/**
 * print_number - prints an integer with putchar only, no long type
 * Description: no arrays or pointers no hardcode special values
 *
 * @n: integer to print
 *
 */

void print_number(int n)
{
	if (n < 0) /* if n negative then put '-' and get n positive */
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10) /* remove last digit and recursion*/
		print_number(n / 10);

	_putchar('0' + n % 10); /* print last digit of the parameter*/

}
