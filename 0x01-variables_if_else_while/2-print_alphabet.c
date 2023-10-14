#include <stdio.h>

/**
 * main - the main function for printing the alphabet
 *
 * Return: 0 on success
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
