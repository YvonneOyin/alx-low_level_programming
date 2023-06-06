#include "main.h"

/**
 * print_square - prints a square of size size
 * @size: size of the square
 *
 * Return: void
 */


void print_square(int size)
{
	int a, b;

	if (size <= 0)
		_putchar('\n');

	a = 0;
	while (a < size)
	{
		b = 0;
		while (b < (size))
		{
			_putchar('#');
			b++;
		}
		a++;
		_putchar('\n');
	}

}
