#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to a pointer to first node
 * @n: value that will be added to the new node
 * @idx: index of the list where the new node should be added, starting at 0
 * Return: the adress of the new element, or NULL if it failed
 * If it is not possible  to add the new node at index idx,
 * do not add the new node and return NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp;

	if (head)
	{
		tmp = malloc(sizeof(listint_t));
		if (tmp == NULL)
		{
			return (NULL);
		}
		tmp->n = (*head)->n;
		tmp->next = *head;
		while (idx > 0 && tmp->next)
		{
			tmp->n = tmp->next->n;
			tmp = tmp->next;
			idx--;
		}
		if (idx == 0)
			tmp->n = n;
		else
			return(NULL);
		return (tmp);
	}
	return (NULL);
}
