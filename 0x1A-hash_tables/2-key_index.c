#include "hash_tables.h"
/**
* key_index - A function
* @key: key to get index from
* @size: size of an array of hash table
*
* Description: Function give you the index of key
* Return: Index of key/value pair stored
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
