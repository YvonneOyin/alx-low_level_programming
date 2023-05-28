#include"main.h"

/**
 * more_numbers - print 0 - 14 ten times and you can only use _putchar 3 times
 *
 * Return: Always 0 (Success)
 */

void more_numbers(void)
{
	int line, count, num;

	line = 0;
	while (line <= 9)
	{
		num = 0;
		while (num <= 14)
		{
			count = num;
			if (num > 9)
			{
				_putchar(1 + '0');
				count = num % 10;
			}
			_putchar(count + '0');
			num++;
		}
		line++;
		_putchar('\n');
	}
}
