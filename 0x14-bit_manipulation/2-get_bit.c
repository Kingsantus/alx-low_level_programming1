#include <stdlib.h>
#include "main.h"

/**
 * get_bit - returns the value of a bit at a specified index in a decimal number
 * @n: decimal number to search for the bit
 * @index: index of the bit to retrieve, starting from 0 for the least significant bit
 *
 * This function extracts the bit at the specified index in the binary representation of the input decimal number.
 * It does this by first right-shifting the decimal number by the specified index bits to bring the bit of interest to the rightmost position.
 * Then, it performs a bitwise AND operation with the value 1 to extract the value of the rightmost bit.
 * The resulting value (either 0 or 1) is returned as an integer.
 *
 * Return: the value (0 or 1) of the bit at the specified index in the decimal number, or -1 if the index is out of range
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return ((n >> index) & 1);
}
