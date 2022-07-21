#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: pointer to list of type dlistint_t
 * * Return: number of nodes, 0 if null
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 1;

	if (!(h))
		return (0);

	if (h->next)
		n += dlistint_len(h->next);
	return (n);
}
