#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void adjustPassword(char *password, int difference);

/**
 * main - Generates random valid passwords for the
 *        program 101-crackme.
 *
 * Return: Always 0.
 */

int main(void)
{
	char password[84];
	int index = 0, sum = 0, diff_half1, diff_half2;

	srand(time(0));

	while (sum < 2772)
	{
		password[index] = 33 + rand() % 94;
		sum += password[index++];
	}

	password[index] = '\0';

	if (sum != 2772)
	{
		diff_half1 = (sum - 2772) / 2;
		diff_half2 = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
			diff_half1++;

		adjustPassword(password, diff_half1);
		adjustPassword(password, diff_half2);
	}

	printf("%s", password);

	return (0);
}

/**
 *  adjustPassword - Adjusts the characters in the password
 *  @password: The password to be adjusted
 *  @difference: The difference to adjust
 */

void adjustPassword(char *password, int difference)
{
	int index;

	for (index = 0; password[index]; index++)
	{
		if (password[index] >= (33 + difference))
		{
			password[index] -= difference;
			break;
		}
	}
}
