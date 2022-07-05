#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *
 * @array: pointer to the first element of the array passed
 * @size: number of elements of the array
 * @cmp: pointer to a function used to compare values
 *
 * Return: returns the index of the first element for which the cmp fonction\
 * doesn't return 0
 * No element matches or size <= 0, then return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
