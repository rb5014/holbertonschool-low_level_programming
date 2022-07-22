#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: pointer to a pointer to first node
 * @n: value that will be added to the new node
 * Return: the adress of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (0);
	}

	new->n = n;
	new->next = *head;
	if ((*head)->prev == NULL)
		new->prev = NULL;
	if (*head != NULL)
		(*head)->prev = new;

	*head = new;
	return (*head);

}
