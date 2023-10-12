#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal using '\' character
 * @n: prints '\' n times
 * Return: void
 */

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i, k;

		for (i = 0 ; i < n ; i++)
		{
			for (k = 0 ; k < i ; k++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
