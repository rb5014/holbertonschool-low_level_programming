#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to list of type dlistint_t
 * * Return: nothing(void)
 */

void free_dlistint(dlistint_t *head)
{
	if (head != NULL)
	{
		free_dlistint(head->next);
		free(head);
	}
}
