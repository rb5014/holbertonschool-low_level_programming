#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to a pointer to first node
 * @n: value that will be added to the new node
 * @idx: index of the list where the new node should be added, starting at 0
 * Return: the adress of the new element, or NULL if it failed
 * If it is not possible  to add the new node at index idx,
 * do not add the new node and return NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	if (head)
	{
		do
		{
			if (idx == 0)
			{
				listint_t *tmp;
				tmp = malloc(sizeof(listint_t));
				if(!(tmp))
					return(NULL);
				tmp->n = n;
				tmp->next = *head;
				*head = tmp;
				return (*head);
			}
			else
			{
				head = &(*head)->next;
			}
		}while(idx--);
	}
	return (NULL);
}
