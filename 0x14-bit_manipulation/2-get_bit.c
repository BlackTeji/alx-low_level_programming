#include "main.h"

/**
 * get_bit - Gets the value of a bit(number) at a given index.
 * @n: the number.
 * @index: the index of the bit to retrieve.
 * Return: The value of the bit at the given index, or -1 in case of error.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	return ((n >> index) & 1);
}
