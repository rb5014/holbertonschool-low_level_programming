#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: Pointer to the newly created hash_table_t
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;

	hash_node_t *hn = malloc(sizeof(char *) * 2);
	hash_table_t *ht = malloc(sizeof(hash_node_t *) * size);

	if (!(hn && ht))
		return (NULL);
	ht->size = size;
	for (i = 0; i < size; i++)
	{
		ht->array = &hn;
	}
	return (ht);
}
