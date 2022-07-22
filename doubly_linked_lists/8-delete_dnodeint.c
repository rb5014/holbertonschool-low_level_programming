#include "lists.h"
#include <stdio.h>
/**
 * delete_dnodeint_at_index - delete a node at a given position
 * @head: pointer to a pointer to first node
 * @index: index of the list where the node should be deleted, starting at 0
 * Return: 1 if success, -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	if (head)
	{
		dlistint_t *tmp = *head;

		while (index > 0 && tmp->next)
		{
			tmp = tmp->next;
			index--;
		}
		if (!(tmp) | index > 0)
			return (-1);
		if (tmp == *head)
			*head = tmp->next;
		if (tmp->next)
			tmp->next->prev = tmp->prev;
		if (tmp->prev)
			tmp->prev->next = tmp->next;
		free(tmp);
		return (1);
	}
	return (-1);
}
