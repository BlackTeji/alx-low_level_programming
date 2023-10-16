#include "main.h"

/**
 * _strlen - it returns the same length of a string
 * @s: this is the string to be measured
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		count++;
	return (count);
}
