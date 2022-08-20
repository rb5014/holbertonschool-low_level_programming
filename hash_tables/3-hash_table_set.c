#include "hash_tables.h"

/**
 * add_first - create and add a node at the beginning of a linked list
 *
 * @head: head of a linked list
 * @key: the key
 * @value: the vqlue qssociqted to the key
 */
void add_first(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *new = malloc(sizeof(hash_node_t));

	if (!(new))
		return;
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = *head;
	*head = new;
}
/**
 * hash_table_set - adds an element to the hash table
 * @ht:  the hash table you want to add or update the key/value to
 * @key: the key. key can not be an empty string
 * @value: the value associated with the key. value must be duplicated.
 * value can be an empty string
 * In case of collision, add the new node at the beginning of the list
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *tmp;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
		key == NULL || strlen(key) == 0 || value == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->next;
	}
	add_first(&(ht->array[index]), key, value);
	return (1);
}
