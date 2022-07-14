#include "lists.h"
#include <string.h>
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to a pointer to first node
 * @str: pointer to a string that should be added to the new node
 * str is duplicated using strdup from <string.h>
 * Return: the adress of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (0);
	}
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;

	*head = new;
	return (*head);



}
