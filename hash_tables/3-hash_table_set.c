#include "hash_tables.h"
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
	hash_node_t *hn = malloc(sizeof(hash_node_t));

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0 || value == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] && strcmp(ht->array[index]->key, key) != 0)
		hn->next = NULL;
	hn->key = strdup(key);
	hn->value = strdup(value);
	ht->array[index] = hn;
	return(1);
 }