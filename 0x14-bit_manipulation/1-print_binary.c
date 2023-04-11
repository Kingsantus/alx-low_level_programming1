#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: the number to be printed in binary.
 *
 * Return: void.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int len = 0;

	while ((mask << 1) <= n)
	{
		mask <<= 1;
		len++;
	}

	while (len >= 0)
	{
		if ((n & mask) == 0)
			_putchar('0');
		else
			_putchar('1');

		mask >>= 1;
		len--;
	}
}
