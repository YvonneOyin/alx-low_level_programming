#include "main.h"

/**
 * print_triangle - Entry point
 *
 * Description: Prints diagonals
 *
 * @size: size of the triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int heigt, base;

		heigt = 1;
		while (heigt <= size)
		{
			base = heigt;
			while (base < size)
			{
				_putchar(' ');
				base++;
			}
			base = 1;
			while (base <= heigt)
			{
				_putchar('#');
				base++;
			}
			heigt++;
			_putchar('\n');
		}
	}
}
