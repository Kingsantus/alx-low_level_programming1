#include <stdlib.h>
#include "main.h"

/*
 * binary_to_uint - Converts a binary number string to an unsigned integer
 * @b: Pointer to the binary string
 *
 * This function takes a pointer to a string of '0' and '1' characters,
 * and returns the unsigned integer value corresponding to the binary
 * representation of the string. If the string is invalid (contains
 * characters other than '0' and '1'), the function returns 0.
 *
 * Return: The unsigned integer value of the binary string, or 0 if invalid
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (int i = 0; b[i] != '0'; i++)
	{
		if (b[i] == '0')
		{
			result = result << 1;
		}
		else if (b[i] == '1')
		{
			result = (result << 1) | 1;
		}
		else
		{
			return (0);
		}
	}
	return (result);
}
