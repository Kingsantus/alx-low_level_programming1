#include <stdio.h>

/**
 * main - entry point for data
 *
 * Return: always 0 succcess
 */
int main(void)
{
	char lc;

	for (lc = 'z'; lc >= 'a'; lc--)
		putchar(lc);
	putchar('\n');
	return (0);
}
