#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to a pointer to first node
 * @n: value that will be added to the new node
 * Return: the adress of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (0);
	}
	new->n = n;
	new->next = *head;

	*head = new;
	return (new);

}
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
	if (head)
	{
		listint_t *new;

		new = malloc(sizeof(listint_t));
		if (!(new))
			return (NULL);

		if (idx == 0)
			new = add_nodeint(head, n);
		else
		{
			listint_t *tmp = *head;
			unsigned int i = 0;

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
		}
		return (new);
	}
	return (NULL);

}
