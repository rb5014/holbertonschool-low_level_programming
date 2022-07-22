#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to a pointer to first node
 * @n: value that will be added to the new node
 * @idx: index of the list where the new node should be added, starting at 0
 * Return: the adress of the new element, or NULL if it failed
 * If it is not possible  to add the new node at index idx,
 * do not add the new node and return NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	if (head)
	{
		do {
			if (idx == 0)
			{
				dlistint_t *tmp;

				tmp = malloc(sizeof(dlistint_t));
				if (!(tmp))
					return (NULL);
				tmp->n = n;
				tmp->next = *head;
				*head = tmp;
				return (*head);
			}
			else
			{
				head = &(*head)->next;
			}
		} while (idx-- && *head);
	}
	return (NULL);
}
