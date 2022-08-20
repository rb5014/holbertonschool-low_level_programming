#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table you want to look into
 * @key: the key you are looking for
 * Return: the value associated with the element, 
 * or NULL if key coun't be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	index = key_index((unsigned char *)key, ht->size);

	return ((ht->array[index])? ht->array[index]->value : NULL);
}