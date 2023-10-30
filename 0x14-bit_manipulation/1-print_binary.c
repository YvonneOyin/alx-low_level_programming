#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 *
 * @n: the integer to be converted to binary
 *
 * Return: nothing (void)
 */
void print_binary(unsigned long int n)
{
	int size, num, i;
	unsigned long int mask;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	size = sizeof(n) * 8;
	i = 1;
	for (num = size - 1; num >= 0; num--)
	{
		mask = 1ul << num;
		if (n & mask)
		{
			i = 0;
			_putchar('1');
		}
		else if (!i)
			_putchar('0');
	}
}
