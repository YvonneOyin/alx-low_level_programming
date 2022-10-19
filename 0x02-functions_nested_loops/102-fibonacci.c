#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the first 50 Fibonacci numbers starting with
 * 1 and 2 folled by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int numCount, fibo1 = 1, fibo2 = 2, sum = 0;

	for (numCount = 0; numCount < 49; ++numCount)
	{
		sum = fibo1 + fibo2;
		printf("%lu, ", fibo1);

		fibo1 = fibo2;
		fibo2 = sum;

		if (numCount == 48)
			printf("%lu\n", fibo1);
	}

	return (0);
}
