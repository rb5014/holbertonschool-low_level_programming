#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to a pointer to first node
 * @n: value that should be added to the new node
 * Return: the adress of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (0);
	}

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		dlistint_t *last = *head;

		while (last->next != NULL)
			last = last->next;
		new->prev = last;
		last->next = new;
	}
	return (new);
}
