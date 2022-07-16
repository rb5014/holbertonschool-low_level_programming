#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to list of type listint_t
 * Return: number of nodes, 0 if null
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 1;

	if (!(h))
		return (0);

	printf("%d\n", h->n);

	if (h->next)
		num += print_listint(h->next);
	return (num);
}
