#include "main.h"

/**
 * get_bit - gets the bit at a given index.
 *
 * @n: the integer to be operated on
 * @index: the index
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int b;

	if (index > 64)
		return (-1);

	b = n >> index;

	return (b & 0x01);
}
