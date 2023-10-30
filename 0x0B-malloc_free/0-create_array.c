#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * create_array - creates an array of chars.
 * @size: size of the array
 * @c: specific char to initialize with
 * Return: returns pointer to array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *mycr;

	if (size == 0)
		return (NULL);

	mycr = malloc(size);

	if (mycr == NULL)
		return (NULL);

	memset(mycr, c, size);

	return (mycr);
}
