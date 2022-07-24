#include "lists.h"
/**
 * delete_nodeint_at_index - delete a node at a given position
 * @head: pointer to a pointer to first node
 * @index: index of the list where the node should be deleted, starting at 0
 * Return: 1 if success, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	if (head && *head)
	{
		listint_t *tmp = *head;
		unsigned int i = 0;

		if (index == 0)
		{
			*head = tmp->next;
			free(tmp);
		}
		else
		{
			listint_t *del;

			while (i < index - 1 && tmp->next)
			{
				tmp = tmp->next;
				i++;
			}
			if (!(tmp) | !(tmp->next) | (i < index - 1))
				return (-1);
			del = tmp->next;
			tmp->next = tmp->next->next;
			free(del);
		}
		return (1);
	}
	return (-1);
}
