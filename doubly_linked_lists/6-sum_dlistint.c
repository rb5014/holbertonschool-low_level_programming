#include "lists.h"
#include <stdio.h>
/**
 * sum_dlistint - returns the sum of all data (n) of a dlistint_t linked list
 * @head: pointer to list of type listint_t
 * Return: sum, 0 if empty
 */

int sum_dlistint(dlistint_t *head)
{
	if (head)
	{
		int n = 0;
		dlistint_t *tmp = head;

		while (tmp)
		{
			n += tmp->n;
			tmp = tmp->next;
		}
		return (n);
	}
	return (0);
}
