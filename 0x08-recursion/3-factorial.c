#include "main.h"

/**
 * factorial - a function that finds the factorial of n
 *
 * @n: positive number
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	/* return -1 if number is negative to indicate error */
	if (n < 0)
	{
		return (-1);
	}
	/* return factorial of 0 = 1 */
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
