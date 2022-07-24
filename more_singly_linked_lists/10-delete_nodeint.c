#include "lists.h"
/**
 * delete_nodeint_at_index - delete a node at a given position
 * @head: pointer to a pointer to first node
 * @index: index of the list where the node should be deleted, starting at 0
 * Return: 1 if success, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	if (head)
	{
		listint_t *tmp = *head;

		while (index > 1 && tmp->next)
		{
			tmp = tmp->next;
			index--;
		}
		if ((!(tmp)) | (index > 0))
			return (-1);
		if (tmp == *head)
		{
			*head = tmp->next;
			free(tmp);
		}
		else
		{
			tmp->next = tmp->next->next;
			free(tmp->next);
		}
		return (1);
	}
	return (-1);
}
