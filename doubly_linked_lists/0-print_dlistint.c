#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: list to print
 *
 *
 * Return: nb of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 1;

	if (!(h))
		return (0);

	printf("%d\n", h->n);

	if (h->next)
		num += print_dlistint(h->next);
	return (num);
}
