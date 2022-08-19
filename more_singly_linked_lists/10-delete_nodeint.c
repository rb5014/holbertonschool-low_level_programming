#include "lists.h"
/**
 * delete_nodeint_at_index - delete the node at index of a listint_t list
 * @head: pointer to a pointer to first node
 * @idx: index of the list where the new node should be added, starting at 0
 * Return: the adress of the new element, or NULL if it failed
 * If it is not possible  to add the new node at index idx,
 * do not add the new node and return NULL
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	if (head)
	{
                listint_t *tmp = *head;

                while (index > 0)
                {
                        tmp = tmp->next;
                        index--;
                }
                if (index == 0)
		{
			while (tmp->next)
			{
				
				tmp = (*head)->next;
			}
			
		}
		return (1);

	}
	return (-1);
}
