#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 *
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int n;
	long int max;
	long int num;

	num = 612852475143;
	max = -1;

	while (num % 2 == 0)
	{
		max = 2;
		num /= 2;
	}

	for (n = 3; n <= sqrt(num); n = n + 2)
	{
		while (num % n == 0)
		{
			max = n;
			num = num / n;
		}
	}

	if (num > 2)

		max = num;

	printf("%ld\n", max);

	return (0);
}
