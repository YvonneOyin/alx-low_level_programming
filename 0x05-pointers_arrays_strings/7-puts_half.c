#include"main.h"

/**
 * puts_half - prints half of a string followed by a new line
 *
 * @str: string to be printed
 *
 * Return: Nothing
 */

void puts_half(char *str)
{
	int li, n;

	for (li = 0; str[li] != '\0'; ++li)
		;

	if (li % 2 == 0)
	{
		for (n = li / 2; str[n] != '\0'; ++n)
			_putchar(str[n]);
	} else
	{
		for (n = ((li - 1) / 2) + 1; str[n] != '\0'; ++n)
			_putchar(str[n]);
	}
	_putchar('\n');
}
