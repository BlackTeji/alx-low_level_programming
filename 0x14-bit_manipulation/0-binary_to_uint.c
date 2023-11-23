#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: points to a string of 0 and 1 chars
 * Return: if b is not 0 and 1, return 0. If so, the converted num.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, powerOfTwo = 1;
	int len = 0;

	if (!b)
		return (0);

	for (len = 0; b[len];)
		len++;

	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		num += (b[len] - '0') * powerOfTwo;
		powerOfTwo *= 2;
	}

	return (num);
}
