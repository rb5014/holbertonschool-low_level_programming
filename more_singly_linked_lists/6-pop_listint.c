#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to pointer to list of type listint_t
 * Return: returns the head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (head)
	{
		tmp = *head;

		if (tmp)
		{
			*head = (*head)->next;
			n = tmp->n;
			free(tmp);
			return (n);
		}
	}
	return (0);
}
