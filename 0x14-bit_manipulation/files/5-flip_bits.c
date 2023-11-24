#include "main.h"

/**
 * flip_bits - count the bit to change to another value
 *
 * @n: the number
 * @m: the number to compare
 *
 * Return: the number of different bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x = 0;

	n = n ^ m;
	while (n)
	{
		x = x + (n & 1);
		n = n >> 1;
	}
	return (x);
}
