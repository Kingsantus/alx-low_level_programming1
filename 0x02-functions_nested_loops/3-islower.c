#include "main.h"

/**
 * _islower - checks for lowercase character
 * Qc: the character to be checked
 * Return: 1 for lowercase character or 0 for anything else
 */
int _islower(int c)
{
	if (c >= 97 && c <= 123)
	{
		return (1);
	}
	return (0);
}
