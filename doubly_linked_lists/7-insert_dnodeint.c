#include "lists.h"
#include <stdio.h>
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
	if (h)
	{
		
		if (idx == 0)
			return (add_dnodeint(h, n));
		else
		{
			dlistint_t *new, *tmp = *h;
			unsigned int i = 0;
			new = malloc(sizeof(dlistint_t));
			if (!(new))
				return (NULL);
			while (i < idx - 1 && tmp)
			{
				tmp = tmp->next;
				i++;
			}
			if (!(tmp))
				return (NULL);
			new->n = n;
			new->next = tmp->next;
			tmp->next = new;
			new->prev = tmp;
			if (new->next)
				new->next->prev = new;
			
			return (new);
		}
	}
	return (NULL);
	
}
