#include "lists.h"
#include <string.h>
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to a pointer to first node
 * @str: pointer to a string that should be added to the new node
 * str is duplicated using strdup from <string.h>
 * Return: the adress of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (0);
	}
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
	}
		tmp->next = new;
	return (tmp);



}
