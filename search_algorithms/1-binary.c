#include "search_algos.h"
/**
 * print_array - print an array
 * @array: the array to print
 * @min: minimum indice
 * @max: maximum indice
 */
void print_array(int *array, size_t min, size_t max)
{
	size_t j;

	printf("Searching in array: ");
	for (j = min; j <= max; j++)
	{
		if (j > min)
			printf(" ,");
		printf("%d", array[j]);
	}
	printf("\n");
}
/**
 * recursive_bin_search - recursively find iif mid cell is equal to value
 * @array: pointer to the first element of the array to search in
 * @value: value to search for
 * @min: minnimum indice
 * @max: maximum indice
 * Return: Indice of the cell if value found or -1 otherwise
 */
int recursive_bin_search(int *array, size_t min, size_t max, int value)
{
	size_t mid = (max + min) / 2;

	print_array(array, min, max);
	if (max < min)
		return (-1);
	if (array[mid] == value)
		return (mid);
	if (array[mid] < value)
		return (recursive_bin_search(array, mid + 1, max, value));
	if (array[mid] > value)
		return (recursive_bin_search(array, min, mid - 1, value));
	return (-1);
}
/**
 * binary_search - searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * array will be sorted in ascending order
 * value will appear more than once in array
 * array is printed everytime it changes (beginning and in subarray)
 * Return: The index where value is located
 * if value isn't present in array or if array NULL, return -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t min = 0;
	size_t max = size - 1;

	if (array == NULL)
		return (-1);
	return (recursive_bin_search(array, min, max, value));

}
