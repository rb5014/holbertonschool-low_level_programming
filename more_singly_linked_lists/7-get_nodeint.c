#include "lists.h"
#include <stdio.h>
/**
 * get_notint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to list of type listint_t
 * @index: index of the node, starting at 0
 * Return: nth node, 0 if null
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (head)
	{
		listint_t *tmp = head;

		while (index > 0 && tmp->next)
		{
			tmp = tmp->next;
			index--;
		}
		if (index == 0)
			return (tmp);
	}

	return (NULL);

}
