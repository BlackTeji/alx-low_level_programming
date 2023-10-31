#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: the given string
 * Return: NULL, if str is NULL.
 */

char *_strdup(char *str)
{
	size_t length;
	char *strout;

	if (str == NULL)
	{
		return (NULL);
	}

	length = strlen(str);
	strout = (char *)malloc((length + 1) * sizeof(char));

	if (strout == NULL)
	{
		return (NULL);
	}
	strcpy(strout, str);

	return (strout);
}
