#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer to an array
 * @n: number of elements of the array
 *
 * Return: nothing(void)
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < (n - 1) / 2; i++) /* tmp store each a[i] 1 by 1 */
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}
