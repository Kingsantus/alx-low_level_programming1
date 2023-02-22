#include <unistd.h>
/**
 * main - entry point
 *
 * Return: always 1 succes
 * error: return -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
