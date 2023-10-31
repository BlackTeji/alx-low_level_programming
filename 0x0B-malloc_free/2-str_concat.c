#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: string one
 * @s2: string two
 * Return: NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *strout;
	unsigned int i, j, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	strout = malloc(sizeof(char) * (i + j + 1));

	if (strout == NULL)
	{
		return (NULL);
	}

	for (k = 0; k < i; k++)
	{
		strout[k] = s1[k];
	}

	for (k = 0; k < j; k++)
	{
		strout[i + k] = s2[k];
	}

	strout[i + j] = '\0';

	return (strout);
}
