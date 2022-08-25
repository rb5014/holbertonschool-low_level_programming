#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of
 * integers using the Linear search algorithm
 * @array: pointer to the first element of the array to search i
 * @size: number of elements in array
 * @value: value to search for
 * Every time you compare a value in the array to the value you are searching,
 * you have to print this value (see example below)
 * Return: the first index zhere value is located
 * if value isn't present in array or if array NULL, return -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
