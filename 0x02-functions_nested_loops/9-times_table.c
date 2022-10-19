#include"main.h"

/**
 * times_table - prints the 9 times table
 *
 * Example Table
 * 0, 0, 0, 0, ..
 * 0, 1, 2, 3, ..
 *
 */

void times_table(void)
{
	int number, multi, prod;

	for (number = 0; number < 10; ++number)
	{
		_putchar('0');
		for (multi = 1; multi < 10; ++multi)
		{
			_putchar(',');
			_putchar(' ');

			prod = multi * number;

			if (prod < 10)
			{
				_putchar(' ');
				_putchar(prod + '0');
			}

			else if (prod >= 10)
			{
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
