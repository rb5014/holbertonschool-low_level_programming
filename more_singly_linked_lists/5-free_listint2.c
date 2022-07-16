#include "lists.h"
/**
 * free_listint2 - frees a listint_t list and set head to NULL
 * @head: pointer to pointer to list of type listint_t
 * Return: nothing(void)
 */

void free_listint2(listint_t **head)
{
	if (*head != NULL)
	{
		listint_t *tmp = *head;

		free_listint2(&tmp->next);
		free(tmp);
		tmp = NULL;
	}
}
