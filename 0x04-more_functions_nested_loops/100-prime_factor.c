#include <stdio.h>

int main (void)
{
	long long number = 612852475143;
	int largest_prime = 0;

	while (number % 2 == 0)
	{
		largest_prime = 2;
		number /= 2;
	}
	for (int i = 3 ; i <= number ; i += 2)
	{
		while (number % i ==0)
		{
			largest_prime = i;
			number /= i;
		}
	}
	printf("%d\n", largest_prime);
	return (0);
}
