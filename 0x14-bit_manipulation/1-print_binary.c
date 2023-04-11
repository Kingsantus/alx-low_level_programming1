#include "main.h"
#include <stdlib.h>

/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to print in binary
 */
void print_binary(unsigned long int n);
{
	unsigned long int a = 1;

	while ((a << 1) <= n)
		a <<= 1;

	while (a != 0)
	{
		if (a & n)
			_putchar('1');
		else
			_putchar('0');

		a >>= 1;
	}
	return (0);
}
