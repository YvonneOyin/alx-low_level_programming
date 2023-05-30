#include "main.h"

/**
 * puts2 - Swaps integers wih pointers.
 *
 * @str: is a pointer to a char
 *
 * Return: Always 0.
 */

void puts2(char *str)
{
	int point;

	point = 0;
	while (str[point] != '\0')
	{
		if (point % 2 == 0)
		{
			_putchar(str[point]);
		}
		point++;
	}
	_putchar('\n');
}
