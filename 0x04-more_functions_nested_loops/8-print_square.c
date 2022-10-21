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

	for (hori = 1; hori <= size; ++hori)
	{
		for (vert = 1; vert <= size; ++vert)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
