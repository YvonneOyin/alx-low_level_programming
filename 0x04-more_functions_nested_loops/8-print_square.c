#include"main.h"

/**
 * print_square - print a square using the character #
 *
 * @size: is the size of the square
 *
 * Return: Always 0 (Success)
 */

void print_square(int size)
{
	int hori, vert;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (hori = 0; hori < size; hori++)
		{
			for (vert = 0; vert < size; vert++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
