#include <stdio.h>

/**
 * main - Prints the first 52 fibonacci numbers
 *
 * Return: Nothing!
 */
int main(void)
{
	int i = 0;
	long j = 1, k = 2;

	while (i < 98)
	{
		if (i == 0)
			printf("%ld\n", j);
		else if (i == 1)
			printf("%ld\n", k);
		else
		{
			k += j;
			j = k - j;
			printf("%ld\n", k);
		}

		++i;
	}

	printf("\n");
	return (0);
}
