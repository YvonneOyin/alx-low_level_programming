#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 *
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
		else
		{
		int height, base;

		for (height = 1; height <= size; height++)
		{
			for (base = height; base < size; base++)
			{
				_putchar(' ');
			}

			for (base = 1; base <= height; base++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
