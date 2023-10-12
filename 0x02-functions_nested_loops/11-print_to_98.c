#include "main.h"
#include <stdio.h>

/**
 * function - prints all natural numbers
 * @n: parameter to be considered
 * Return: void
 */

void print_to_98(int n)
{
	int k;

	if (n >= 0 && n <= 98)
	{
		for (k = n ; k <= 98 ; k++)
		{
			printf("%d", k);
			if (k != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n < 0)
	{
		for (k = n ; k <= 98 ; k++)
		{
			printf("%d", k);
			if (k != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n > 98)
	{
		for (k = n ; k >= 98 ; k--)
		{
			printf("%d", k);
			if (k != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n == 98)
		printf("%d\n", n);
}
