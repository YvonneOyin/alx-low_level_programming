#include"main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n: is the number of times the \ character should be printed
 */
void print_diagonal(int n)
{
	int slant, gap;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		slant = 0;
		while (slant < n)
		{
			gap = 0;
			while (gap < n)
			{
				if (gap == slant)
				{
					_putchar('\\');
				}
				else if (gap < slant)
				{
					_putchar(' ');
				}
				gap++;
			}
			slant++;
			_putchar('\n');
		}
	}
}
