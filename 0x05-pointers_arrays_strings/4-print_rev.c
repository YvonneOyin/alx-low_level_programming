#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 *
 * @s: string to be printed
 *
 * Return: Nothing
 */

void print_rev(char *s)
{
	int point;

	point = 0;
	while (s[point] != '\0')
	{
		++point;
	}
	--point;
	while (point >= 0)
	{
		_putchar(s[point]);
		--point;
	}
	_putchar('\n');
}
