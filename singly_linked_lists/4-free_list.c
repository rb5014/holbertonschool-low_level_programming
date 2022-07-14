#include "lists.h"
/**
 * free_list - frees a lits_t list
 * @head: pointer to list of type list_t
 * * Return: nothing(void)
 */

void free_list(list_t *head)
{
	if (head != NULL)
	{
		free_list(head->next);
		free(head->str);
		free(head);
	}
}
