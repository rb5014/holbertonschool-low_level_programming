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
	if (action && array)
	{
		while ((size) != 0)
		{
			action(array[size - 1]);
			size--;
		}
	}
}
