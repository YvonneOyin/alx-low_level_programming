#include "main.h"

/**
 * factorial - a function that finds the factorial of n
 *
 * @n: positive integer taken into consideration
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	/* to indicate an error */
	if (n < 0)
	{
		return (-1);
	}

	/* sets the factorial of 0 to 1 */
	else if (n == 0)
	{
		return (1);
	}

	/* returns the factorial of every given number above 0 */
	else
	{
		return (n * factorial(n - 1));
	}
}
