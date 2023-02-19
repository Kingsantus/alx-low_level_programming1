#include <stdio.h>

/**
 * main - print in lowcase and uppercase
 *
 * Return: always 0 success
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	for (letter = 'A'; letter <= 'A'; letter++)
		putchar(letter);

	putchar('\n');
	return (0);
}
