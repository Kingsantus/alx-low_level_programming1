#include <stdio.h>

/**
 * main - entry code to print in low case
 *
 * Return: always o success
 */
int main(void)
{
	char c;

	for (c = 'a', c <= 'z', ++c)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}

