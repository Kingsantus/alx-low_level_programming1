#include "main.h"
#include <stdlib.h>

/*
 * binary_to_uint - Converts a binary number string to an unsigned integer
 * This function takes a pointer to a string of '0' and '1' characters,
 *
 * Return: The unsigned integer value of the binary string, or 0 if invalid
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int a = 0;
	int i;

	if (!b)
	{
		return (0);
	}
	for (i = 0; b[i]; i++)
	{
		if (b[i] <  '0' || b[i] > '1')
		{
			return (0);
		}
		a = 2 * a + (b[i] - '0');
	}
	return (a);
}
