#include"main.h"

/**
 * more_numbers - print 0 - 14 ten times and you can only use _putchar 3 times
 *
 * Return: Always 0 (Success)
 */

void more_numbers(void)
{
	int number, line, count;

	for (line = 1; line <= 10; ++line)
	{
		for (count = 0; count < 15; ++count)
		{
			number = count;
			if (count > 9)
			{
				_putchar(1 + 48);
				num = count % 10;
			}
			_putchar(number + 48);
		}
		_putchar('\n');
	}
}
