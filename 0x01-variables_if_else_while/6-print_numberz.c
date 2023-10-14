#include <stdio.h>

/**
 * main - function prints a single digit number from 10
 *
 * Return: 0 when success
 */

int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
