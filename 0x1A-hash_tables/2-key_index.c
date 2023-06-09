#include "hash_tables.h"
#include <stdio.h>

/**
 * key_index - Give index of a key.
 * @key: The key.
 * @size: size of the array.
 *
 * Return: index which key/value pair stored.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	hash_value = hash_djb2(key);
	return (hash_value % size);
}

