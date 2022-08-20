#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: the hast table to print
 * prints the key/value in the order that
 * they appear in the array of hash table: array, list
 * if ht is NULL, prints nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;
	int n = 0;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			if (n)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			tmp = tmp->next;
			n = 1;
		}

	}
	printf("}\n");
}
