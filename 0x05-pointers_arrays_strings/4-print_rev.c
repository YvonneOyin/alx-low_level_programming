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
	int mark;

	for (mark = 0; s[mark] != '\0'; ++mark)
		;
	for (--mark; mark >= 0; --mark)
		_putchar(s[mark]);
	_putchar('\n');
}
