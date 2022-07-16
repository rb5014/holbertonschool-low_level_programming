#include "lists.h"
#include <stdio.h>
/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: pointer to list of type listint_t
 * * Return: number of nodes, 0 if null
 */

size_t listint_len(const listint_t *h)
{
	size_t n = 1;

	if (!(h))
		return (0);

	if (h->next)
		n += listint_len(h->next);
	return (n);
}
