#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a list_t list
 * @head: pointer to a pointer to first node
 * @n: value that should be added to the new node
 * Return: the adress of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (0);
	}

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		listint_t *last = *head;

		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	return (new);
}
