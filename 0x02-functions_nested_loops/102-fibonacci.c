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
	int numCount;
	unsigned long int fibo1 = 0, fibo2 = 1, sum;

	for (numCount = 0; numCount < 50; ++numCount)
	{
		sum = fibo1 + fibo2;
		printf("%lu, ", sum);

		fibo1 = fibo2;
		fibo2 = sum;

		if (numCount == 49)
			printf("\n");
		else
			printf(",");
	}

	return (0);
}
