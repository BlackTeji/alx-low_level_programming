#include "main.h"

/**
 * swap_int - the function swaps two ints 'a' and 'b'.
 * @a: represents int one
 * @b: this is int two
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int j;

	j = *a;
	*a = *b;
	*b = j;
}
