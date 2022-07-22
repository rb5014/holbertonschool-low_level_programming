#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to list of type dlistint_t
 * @index: index of the node, starting at 0
 * Return: nth node, 0 if null
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (head)
	{
		dlistint_t *tmp = head;

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
