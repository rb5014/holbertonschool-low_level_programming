#include "lists.h"
#include <stdio.h>
/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to list of type list_t
 * * Return: number of nodes, 0 if null
 */

size_t list_len(const list_t *h)
{
	size_t n = 1;

	if (!(h))
		return (0);

	if (h->next)
		n += list_len(h->next);
	return (n);
}
