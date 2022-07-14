#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to list of type list_t
 * If str is NULL, print [0] (nil)
 * Return: number of nodes, 0 if null
 */

size_t print_list(const list_t *h)
{
	size_t n = 1;

	if (!(h))
		return (0);

	printf("[%u] %s\n", h->len, h->str == NULL ? "(nil)" : h->str);

	if (h->next)
		n += print_list(h->next);
	return (n);
}
