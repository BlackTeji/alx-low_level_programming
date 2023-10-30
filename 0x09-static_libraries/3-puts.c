#include "main.h"

/**
 * _puts - this prints an rntire string
 * @str: the string to be printed
 * Return: voud
 */

void _puts(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
		_putchar(str[i]);
	_putchar('\n');
}
