#include "lists.h"
#include <stdio.h>
/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer to list of type listint_t
 * Return: sum, 0 if empty
 */

int sum_listint(listint_t *head)
{
	if (head)
	{
		int n = 0;
		listint_t *tmp = head;

		while (tmp)
		{
			n += tmp->n;
			tmp = tmp->next;
		}
		return (n);
	}
	return (0);
}
