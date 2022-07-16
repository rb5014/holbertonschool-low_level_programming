#include "lists.h"
/**
 * free_listint - frees a listint_t list
 * @head: pointer to list of type listint_t
 * * Return: nothing(void)
 */

void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		free_listint(head->next);
		free(head);
	}
}
