#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: the hast table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			if (tmp->key)
			{
				free(tmp->key);
				tmp->key = NULL;
			}
			if (tmp->value)
			{
				free(tmp->value);
				tmp->value = NULL;
			}
			ht->array[i] = ht->array[i]->next;
			free(tmp);
			tmp = ht->array[i];
		}
	}
	free(ht->array);
	free(ht);
}
