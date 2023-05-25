#include"main.h"

/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int num, multi, prodct;

	num = 0;
	while (num < 10)
	{
		_putchar('0');
		multi = 1;
		while (multi < 10)
		{
			_putchar(',');
			_putchar(' ');

			prodct = multi * num;
			if (prodct < 10)
			{
				_putchar(' ');
				_putchar(prodct + '0');
			}
			else if (prodct >= 10)
			{
				_putchar((prodct / 10) + '0');
				_putchar((prodct % 10) + '0');
			}
			multi++;
		}
		num++;

		_putchar('\n');
	}
}
