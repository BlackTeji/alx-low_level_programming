#include <stdio.h>

/**
 * main - prints the alphabet in lowercase and omits some
 *
 * Return: when success, 0
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
