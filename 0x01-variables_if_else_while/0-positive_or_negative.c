#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  * main - Entry point
  * Initialize the random number generator using srand
  * Print value of n status, if zero, positive or negative
  * srand() function with time(0) from <time.h>
  * n variable is assigned a random value using n = rand() - RAND_MAX / 2,
  * which generates a random number between -RAND_MAX/2 and RAN_MAX/2
  * the rand() function is from <stdlib.h>
  * Return: 0 (success)
  */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
