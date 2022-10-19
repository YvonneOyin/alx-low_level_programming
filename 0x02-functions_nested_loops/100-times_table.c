#include"main.h"

/**
 * print_times_table - prints time table of n
 *
 * @n: takes number input
 */

void print_times_table(int n)
{
	int prod, multi, number;

	if (n <= 15 && n >= 0)
	{
		for (number = 0; number <= n; ++number)
		{
			for (multi = 0; multi <= n; ++multi)
			{
				prod = number * multi;
				if (multi == 0)
				{
					_putchar(prod + '0');
				}
				if (prod < 10 && multi != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(prod + '0');
				}
				else if (prod >= 10 && prod < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((prod / 10) + '0');
					_putchar((prod % 10) + '0');
				} else if (prod >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((prod / 100) + '0');
					_putchar(((prod / 10) % 10) + '0');
					_putchar((prod % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
