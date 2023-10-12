#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 *
 * @n: number of parameters passed
 *
 * Return: an integer which is the sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int num, sum;
	va_list list;

	va_start(list, n);
	if (n == 0)
		return (0);

	sum = 0;
	for (num = 0; num < n; num++)
	{
		sum = sum + va_arg(list, int);
	}
	va_end(list);

	return (sum);
}
