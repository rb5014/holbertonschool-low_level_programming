#include "hash_tables.h"
/**
 * key_index - implementation of the djb2 algorithm
 * This function should use the hash_djb2 function that you wrote earlier
 * @key: key to use
 * @size: size of the array of the hash table
 * Return:  the index at which the key/value pair should be stored in
 * the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
