#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 * followed by a new line
 * Return: ALways 0 (Success)
 */

int main(void)
{
	unsigned long fibo1 = 0, fibo2 = 1, sum;
	long int total;

	while (1)
	{
		sum = fibo1 + fibo2;

		if (sum > 4000000)
		{
			break;
		}

		if ((sum % 2) == 0)
		{
			total = total + sum;
		}

		fibo1 = fibo2;
		fibo2 = sum;
	}
	printf("%ld\n", total);

	return (0);
}
