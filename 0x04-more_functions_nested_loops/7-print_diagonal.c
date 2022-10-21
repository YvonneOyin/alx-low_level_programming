#include"main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n: is the number of times the \ character should be printed
 */

void print_diagonal(int n)
{
	int diag, gap;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (diag = 0; diag < n; diag++)
		{
			for (gap = 0; gap < n; gap++)
			{
				if (gap == diag)
					_putchar('\\');
				else if (gap < diag)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
