#include "lists.h"
/**
 * free_listint2 - frees a listint_t list and set head to NULL
 * @head: pointer to pointer to list of type listint_t
 * Return: nothing(void)
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (head)
	{
		tmp = *head;
		*head = (*head)->next;
		n = tmp->n;
		free(tmp);
		return(n);
	}
	else
		return(0);

}
