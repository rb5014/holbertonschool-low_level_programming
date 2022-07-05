#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each element
 * of an array
 *
 * @array: array passed as an argument
 * @size: sizeof the array
 * @action: pointer to the function we need to use
 *
 * Return: nothing (void)
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action && array)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
