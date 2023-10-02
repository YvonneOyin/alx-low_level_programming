#include "main.h"

/**
 * search - checks to see if number is prime
 *
 * @x: integer x
 * @y: integer y
 *
 * Return: int
 */
int search(int x, int y)
{
	if (y < 2 || y % x == 0)
	{
		return (0);
	}
	else if (x > y / 2)
	{
		return (1);
	}
	else
	{
		return (search(x + 1, y));
	}
}

/**
 * is_prime_number - states if number is prime
 *
 * @n: integer n
 *
 * Return: int
 */
int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	return (search(2, n));
}
