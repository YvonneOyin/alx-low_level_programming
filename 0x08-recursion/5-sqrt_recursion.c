#include "main.h"

/**
 * search - checks for the square root
 *
 * @x: integer x
 * @y: integer y
 *
 * Return: integer
 */
int search(int x, int y)
{
	if (x * x == y)
		return (x);
	if (x * x > y)
		return (-1);
	return (search(x + 1, y));
}

/**
 * _sqrt_recursion - returns the square root of a number
 *
 * @n: integer to find sqrt of
 *
 * Return: square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (search(1, n));
}
