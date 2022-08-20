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
	unsigned long int k;
	hash_node_t *hn = malloc(sizeof(hash_node_t));

	if (key && hn)
	{
		k = key_index((unsigned char *)key, ht->size);
		hn->key = strdup(key);
		hn->value =  strdup(value);
		hn->next = NULL;
		if (hn->value && hn->key)
		{
			ht->array[k] = hn;
			return(1);
		}
	}
	return (0);
 }